/*
/ Title;
/   unknown.cpp

/ Authors;
/   David De Vorchik (daviddv)

/ Notes;
/   Helper functions for handling IUnknown
*/
#include "pch.h"
#pragma hdrstop


/*
/ CUnknown
/   Helper functions to aid the implementation of IUnknown within objects,
/   handles not only AddRef and Release, but also QueryInterface.
*/

LONG g_cRefCount = 0;          // global reference count

CUnknown::CUnknown()
{
    m_cRefCount = 0;
    InterlockedIncrement(&g_cRefCount);
}

CUnknown::~CUnknown()
{
    InterlockedDecrement(&g_cRefCount);
}


/*
/ CUnknown::HandleQueryInterface

/   A table driven implementation of QueryInterface that scans through trying
/   to find a suitable match for the object.

/ In:
/   riid = interface being requested
/   ppvObject -> receives a pointer to the object
/   aIntefaces = array of interface descriptions
/   cif = number of interfaces in array
*/
STDMETHODIMP CUnknown::HandleQueryInterface(REFIID riid, LPVOID* ppvObject, LPINTERFACES aInterfaces, int cif)
{
    HRESULT hr = S_OK;
    int i;

    if ( !ppvObject || !aInterfaces || !cif )
    {
        hr = E_INVALIDARG;
        goto exit_gracefully;
    }

    *ppvObject = NULL;          // no interface yet

    for ( i = 0; i != cif; i++ )
    {
        if ( IsEqualIID(riid, *aInterfaces[i].piid) || IsEqualIID(riid, IID_IUnknown) )
        {
            *ppvObject = aInterfaces[i].pvObject;
            goto exit_gracefully;
        }
    }

    hr = E_NOINTERFACE;         // failed.

exit_gracefully:

    if ( SUCCEEDED(hr) )
        ((LPUNKNOWN)*ppvObject)->AddRef();

    return hr;
}


/*
/   Increase the objects reference count.  Global reference count increase by the constructor.

/ In:

/ Out:
/   current reference count
*/
STDMETHODIMP_(ULONG) CUnknown::HandleAddRef()
{
    return InterlockedIncrement(&m_cRefCount);

}


/*
/   Decrease the reference counts, when the objects reaches zero then
/   destroy it (which inturn will decrease the global reference count).

/ In:

/ Out:
/   current reference count == 0 if destroyed
*/
STDMETHODIMP_(ULONG) CUnknown::HandleRelease()
{
    ULONG cRefCount;

    cRefCount = InterlockedDecrement(&m_cRefCount);

    if ( cRefCount )
        return cRefCount;

    delete this;
    return 0;
}