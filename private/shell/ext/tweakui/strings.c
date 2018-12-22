/*
 *  strings.c - all our strings that need to be encoded/decoded

 *  To impede reverse-engineering, we encode all politically damaging
 *  strings so that a "strings" won't reveal anything incriminating.

 *  This file is in two parts.  The first part (protected by "#ifdef
 *  PERL_INVOKED") consists of the human-readable data.  The second part
 *  is generated by a perl script and is the part that the compiler sees.

*/

#ifdef PERL_INVOKED

/*
 *  This part of the file consists of our string declarations.
*/

c_tszNil, ""

/*
 *  Help file name, names of weird DLLs we need to hack, our own name.
*/
c_tszMyHelp, "TWEAKUI.HLP"
c_tszComCtl32Dll, "COMCTL32.DLL"
c_tszShell32Dll, "SHELL32.DLL"
c_tszTweakUICpl, "TWEAKUI.CPL"
c_tszWininit, "WININIT.INI"

c_tszSMWCV,    "Software\\Microsoft\\Windows\\CurrentVersion"
c_tszSMWNTCV,    "Software\\Microsoft\\Windows NT\\CurrentVersion"
c_tszSMWIE,    "Software\\Microsoft\\Internet Explorer"

/*
 *  Where we get the OPK subversion "number".
*/
c_tszSubVersion, "SubVersionNumber"

/*
 *  Where to install ourselves at startup.
*/
c_tszRun,    "Run"
c_tszRunServices,"RunServices"
c_tszBackslash,    "\\"

/*
 *  Windows 95 and Windows NT use different rundll commands to
 *  install inf files.
*/
c_tszFormatRundll, "%srundll.exe setupx.dll,InstallHinfSection Default%snstall 4 "
c_tszFormatRundllNT, "%srundll32.exe syssetup.dll,SetupInfObjectInstallAction Default%snstall 4 "
c_tszI, "I"
c_tszUni, "Uni"

/*
 *  Inf files we may need to install.
*/
c_tszInfBsShellInf, "Inf\\Shell.inf"
c_tszInfBsTweakuiInf, "Inf\\Tweakui.Inf"

/*
 *  Filename extensions.
*/
c_tszDotInf, ".inf"
c_tszDotLnk, ".lnk"
c_tszDotBak, ".bak"

/*
 * Even though we might be 16-bit, we still need to use RUNDLL32,
 * so that SHELL32 and COMCTL32 will be in context so we can patch them.
 * (Aigh!)
*/
c_tszFixLink, "RUNDLL32.EXE TWEAKUI.CPL,TweakMeUp"

/*
 * This performs the wacky goo we do for Windows 95 automatic logon.
*/
c_tszFixAutoLogon, "RUNDLL32.EXE TWEAKUI.CPL,TweakLogon"

/*
 *  Restriction keys.
*/
c_tszNoNetHood, "NoNetHood"
c_tszNoDrives, "NoDrives"
c_tszPoliciesSystem, "Policies\\System"
c_tszNoRegedit, "DisableRegistryTools"
c_tszNoInternetIcon,         "NoInternetIcon"
c_tszNoRecentDocsHistory,    "NoRecentDocsHistory"
c_tszNoRecentDocsMenu,       "NoRecentDocsMenu"
c_tszNoActiveDesktop,        "NoActiveDesktop"
c_tszNoActiveDesktopChanges, "NoActiveDesktopChanges"
c_tszNoFavoritesMenu,        "NoFavoritesMenu"
c_tszClearRecentDocsOnExit,  "+ClearRecentDocsOnExit"
c_tszClassicShell,           "ClassicShell"

c_tszIE4RegKeyChange,        "Software\\Microsoft\\Windows\\CurrentVersion\\Policies"

c_tszDesktopNameSpace, "Desktop\\NameSpace"

c_tszClsid, "CLSID"

c_tszPathShellFolder, "CLSID\\%s\\ShellFolder"
c_tszAttributes, "Attributes"

/*
 * c_tszClsidMyComp,    "{20D04FE0-3AEA-1069-A2D8-08002B30309D}"
*/
c_tszClsidNetHood,    "{208D2C60-3AEA-1069-A2D7-08002B30309D}"
c_tszClsidCpl,        "{21EC2020-3AEA-1069-A2DD-08002B30309D}"
c_tszClsidPrint,    "{2227A280-3AEA-1069-A2DE-08002B30309D}"

c_tszDot,        "."

/*
 *  Generic Windows customization keys go here.
*/

c_tszRegPathDesktop,    "Control Panel\\Desktop"
c_tszDelay,        "MenuShowDelay"
c_tszSmoothScroll,    "SmoothScroll"
c_tszWindows,        "Windows"
c_tszKernel32,        "KERNEL32"
c_tszMapSL,        "MapSL"
c_tszSearchUrl,        "SearchUrl"
c_tszPaintDesktop,      "PaintDesktopVersion"

/*
 *  Uninstall keys.
*/

c_tszUninstall,        "Uninstall"
c_tszDisplayName,    "DisplayName"
c_tszUninstallString,    "UninstallString"
c_tszUninstallTweakUI,    "Uninstall\\TweakUI"

/*
 *  MSDOS.SYS keys
*/

c_tszBoot,        "boot"
c_tszSysIni,        "system.ini"
c_tszDisplayDrv,    "display.drv"
c_tszXgaDrv,        "xga.drv"
c_tszPaths,        "Paths"
c_tszWinDir,        "WinDir"
c_tszOptions,        "Options"
c_tszBootKeys,        "BootKeys"
c_tszBootDelay,        "BootDelay"
c_tszBootGUI,        "BootGUI"
c_tszBootMenu,        "BootMenu"
c_tszBootMenuDelay,    "BootMenuDelay"
c_tszLogo,        "Logo"
c_tszBootMulti,        "BootMulti"
c_tszAutoScan,        "AutoScan"

/*
 *  Explorer keys.
*/
c_tszRegPathAppearance,    "Control Panel\\Appearance"
c_tszCustomColors,    "CustomColors"

c_tszShellIcons,    "Shell Icons"
c_tszLinkOvl,        "29"
c_tszMetrics,        "Control Panel\\Desktop\\WindowMetrics"
c_tszShellIconSize,    "Shell Icon Size"
c_tszAltColor,        "AltColor"

c_tszTips,        "Tips"
c_tszShow,        "Show"

c_tszRestrictions,    "Policies\\Explorer"
c_tszNoExitSave,    "NoSaveSettings"
c_tszNoBanner,        "NoStartBanner"

c_tszAppletTweakUI,    "Applets\\TweakUI"
c_tszHackPtui,        "0"

c_tszSCommaU,        "%s,%u"
c_tszPercentU,        "%u"

/*
 *  User shell folders (and fake versions of same)
*/
c_tszUserShellFolders,    "User Shell Folders"
c_tszDesktop,        "Desktop"
c_tszPrograms,        "Programs"
c_tszRecent,        "Recent"
c_tszSendTo,        "SendTo"
c_tszPersonal,        "Personal"
c_tszStartup,        "Startup"
c_tszFavorites,        "Favorites"
c_tszStartMenu,        "Start Menu"
c_tszTemplates,        "Templates"
c_tszProgramFilesDir,   "ProgramFilesDir"
c_tszCommonFilesDir,    "CommonFilesDir"
c_tszSetup,             "Setup"
c_tszSourcePath,        "SourcePath"

/*
 *  Dorking the "Shortcut to" prefix
*/

c_tszExplorer,        "Explorer"
c_tszLink,        "Link"

c_tszBang,        "!"
c_tszBangLnk,        "!.lnk"

/*
 *  Network keys.
*/
c_tszWinlogon,        "Winlogon"
c_tszAutoLogon,        "AutoAdminLogon"
c_tszDefaultUserName,    "DefaultUserName"
c_tszDefaultPassword,    "DefaultPassword"
c_tszDontDisplayLast,    "DontDisplayLastUserName"
c_tszNetLogon,        "Network\\Logon"
c_tszUserName,        "UserName"

/*
 *  Paranoia
*/
c_tszRunMRU,        "RunMRU"
c_tszFindDocsMRU,    "Doc Find Spec MRU"
c_tszFindCompMRU,    "FindComputerMRU"
c_tszTypedURLs,        "TypedURLs"
c_tszAudioCDBSShell,    "AudioCD\\shell"
c_tszPlay,        "play"
c_tszNoDriveTypeAutoRun,"NoDriveTypeAutoRun"
c_tszFault,        "Fault"
c_tszLogFile,        "LogFile"

c_tszIETypedURLs,    "Software\\Microsoft\\Internet Explorer\\TypedURLs"
c_tszMSNTypedURLs,    "Software\\Microsoft\\MSN\\TypedURLs"
c_tszMain,        "Main"
c_tszHistoryDir,    "History_Directory"

c_tszNetHistory95,      "Network\\Recent"
c_tszNetHistoryNT,      "Software\\Microsoft\\Windows NT\\CurrentVersion\\Network\\Persistent Connections"

c_tszParanoia,        "1"

/*
 *  Repair
*/
c_tszRegedit,        "Applets\\Regedit"
c_tszView,        "View"
c_tszSetupExe,        "SETUP.EXE"
c_tszBSDesktopIni,    "\\DESKTOP.INI"
c_tszExe,        "EXE"
c_tszRename,        "rename"

/*
 *  This is relative to HKLM\Sofrware\Microsoft\Windows\CurrentVersion
*/

c_tszUrlHist,           "Internet Settings\\Url History"
c_tszIECache,           "Internet Settings\\Cache\\Paths"
c_tszDirectory,         "Directory"
c_tszHistory,           "History"
c_tszTempInet,          "Temporary Internet Files"

/*
 *  Templates
*/

c_tszShellNew,        "ShellNew"
c_tszShellNewDash,    "ShellNew-"
c_tszNullFile,        "NullFile"
c_tszFileName,        "FileName"
c_tszData,        "Data"
c_tszCommand,        "Command"
c_tszShell,        "Shell"

/*
 *  Control Panel
*/
c_tszDontLoad,          "don't load"
c_tszNo,                "no"
c_tszControlIni,        "control.ini"
c_tszStarCpl,           "*.cpl"
c_tszAppWizCpl,         "appwiz.cpl"
c_tszDeskCpl,           "desk.cpl"
c_tszIntlCpl,           "intl.cpl"
c_tszMainCpl,           "main.cpl"
c_tszTimeDateCpl,       "timedate.cpl"

#endif /* PERL_INVOKED */
/* DON'T EDIT ANYTHING AFTER THIS POINT; IT WILL BE NUKED BY THE PERL SCRIPT */
#include "tweakui.h"
TCHAR c_rgtchCommon[2162] = {
0x53,
0x3c,
0x5a,
0x2e,
0x59,
0x38,
0x4a,
0x2f,
0x73,
0x3e,
0x57,
0x34,
0x46,
0x29,
0x5a,
0x35,
0x53,
0x27,
0x7b,
0x2c,
0x45,
0x2b,
0x4f,
0x20,
0x57,
0x24,
0x04,
0x4a,
0x1e,
0x42,
0x01,
0x74,
0x06,
0x74,
0x11,
0x7f,
0x0b,
0x5d,
0x38,
0x4a,
0x39,
0x50,
0x3f,
0x51,
0x0d,
0x43,
0x26,
0x52,
0x25,
0x4a,
0x38,
0x53,
0x0f,
0x5f,
0x3a,
0x48,
0x3b,
0x52,
0x21,
0x55,
0x30,
0x5e,
0x2a,
0x0a,
0x49,
0x26,
0x48,
0x26,
0x43,
0x20,
0x54,
0x3d,
0x52,
0x3c,
0x4f,
0x4f,
0x6a,
0x19,
0x6b,
0x1e,
0x70,
0x14,
0x78,
0x14,
0x27,
0x15,
0x3b,
0x5e,
0x26,
0x43,
0x63,
0x10,
0x69,
0x1a,
0x69,
0x0c,
0x78,
0x0d,
0x7d,
0x53,
0x37,
0x5b,
0x37,
0x1b,
0x48,
0x2d,
0x59,
0x2c,
0x5c,
0x15,
0x7b,
0x1d,
0x52,
0x30,
0x5a,
0x3f,
0x5c,
0x28,
0x61,
0x0f,
0x7c,
0x08,
0x69,
0x05,
0x69,
0x28,
0x4b,
0x3f,
0x56,
0x39,
0x57,
0x77,
0x33,
0x56,
0x30,
0x51,
0x24,
0x48,
0x3c,
0x19,
0x6a,
0x04,
0x77,
0x03,
0x62,
0x0e,
0x62,
0x42,
0x76,
0x56,
0x56,
0x73,
0x00,
0x72,
0x07,
0x69,
0x0d,
0x61,
0x0d,
0x23,
0x46,
0x3e,
0x5b,
0x7b,
0x08,
0x6d,
0x19,
0x6c,
0x1c,
0x64,
0x4a,
0x2e,
0x42,
0x2e,
0x02,
0x4b,
0x25,
0x56,
0x22,
0x43,
0x2f,
0x43,
0x0b,
0x62,
0x0c,
0x6a,
0x39,
0x5c,
0x3f,
0x4b,
0x22,
0x4d,
0x23,
0x03,
0x47,
0x22,
0x44,
0x25,
0x50,
0x3c,
0x48,
0x6d,
0x1e,
0x70,
0x03,
0x77,
0x16,
0x7a,
0x16,
0x36,
0x02,
0x22,
0x22,
0x71,
0x1e,
0x78,
0x0c,
0x7b,
0x1a,
0x68,
0x0d,
0x51,
0x1c,
0x75,
0x16,
0x64,
0x0b,
0x78,
0x17,
0x71,
0x05,
0x59,
0x0e,
0x67,
0x09,
0x6d,
0x02,
0x75,
0x06,
0x5a,
0x19,
0x6c,
0x1e,
0x6c,
0x09,
0x67,
0x13,
0x45,
0x20,
0x52,
0x21,
0x48,
0x27,
0x49,
0x15,
0x45,
0x2a,
0x46,
0x2f,
0x4c,
0x25,
0x40,
0x33,
0x33,
0x60,
0x0f,
0x69,
0x1d,
0x6a,
0x0b,
0x79,
0x1c,
0x40,
0x0d,
0x64,
0x07,
0x75,
0x1a,
0x69,
0x06,
0x60,
0x14,
0x48,
0x01,
0x6f,
0x1b,
0x7e,
0x0c,
0x62,
0x07,
0x73,
0x53,
0x16,
0x6e,
0x1e,
0x72,
0x1d,
0x6f,
0x0a,
0x78,
0x24,
0x70,
0x09,
0x79,
0x1c,
0x78,
0x2d,
0x7f,
0x33,
0x40,
0x40,
0x13,
0x7c,
0x1a,
0x6e,
0x19,
0x78,
0x0a,
0x6f,
0x33,
0x7e,
0x17,
0x74,
0x06,
0x69,
0x1a,
0x75,
0x13,
0x67,
0x3b,
0x6c,
0x05,
0x6b,
0x0f,
0x60,
0x17,
0x64,
0x44,
0x0a,
0x5e,
0x02,
0x41,
0x34,
0x46,
0x34,
0x51,
0x3f,
0x4b,
0x1d,
0x78,
0x0a,
0x79,
0x10,
0x7f,
0x11,
0x11,
0x42,
0x2d,
0x4b,
0x3f,
0x48,
0x29,
0x5b,
0x3e,
0x62,
0x2f,
0x46,
0x25,
0x57,
0x38,
0x4b,
0x24,
0x42,
0x36,
0x6a,
0x3d,
0x54,
0x3a,
0x5e,
0x31,
0x46,
0x35,
0x69,
0x2a,
0x5f,
0x2d,
0x5f,
0x3a,
0x54,
0x20,
0x76,
0x13,
0x61,
0x12,
0x7b,
0x14,
0x7a,
0x7a,
0x01,
0x33,
0x02,
0x47,
0x04,
0x36,
0x06,
0x34,
0x04,
0x29,
0x1a,
0x5b,
0x1e,
0x5f,
0x72,
0x43,
0x73,
0x45,
0x7c,
0x51,
0x10,
0x22,
0x66,
0x22,
0x0f,
0x3f,
0x07,
0x37,
0x07,
0x35,
0x77,
0x44,
0x74,
0x47,
0x77,
0x4e,
0x0a,
0x77,
0x77,
0x0c,
0x3e,
0x0c,
0x3e,
0x09,
0x48,
0x7a,
0x42,
0x72,
0x5f,
0x6c,
0x2d,
0x68,
0x29,
0x04,
0x35,
0x05,
0x33,
0x0a,
0x27,
0x66,
0x54,
0x10,
0x55,
0x78,
0x48,
0x70,
0x40,
0x70,
0x42,
0x00,
0x33,
0x03,
0x30,
0x00,
0x39,
0x7d,
0x00,
0x00,
0x7b,
0x49,
0x79,
0x41,
0x05,
0x37,
0x74,
0x42,
0x72,
0x5f,
0x6c,
0x2d,
0x68,
0x29,
0x04,
0x35,
0x05,
0x33,
0x0a,
0x27,
0x66,
0x54,
0x10,
0x27,
0x0a,
0x3a,
0x02,
0x32,
0x02,
0x30,
0x72,
0x41,
0x71,
0x42,
0x72,
0x4b,
0x0f,
0x72,
0x72,
0x21,
0x4e,
0x28,
0x5c,
0x2b,
0x4a,
0x38,
0x5d,
0x01,
0x4c,
0x25,
0x46,
0x34,
0x5b,
0x28,
0x47,
0x21,
0x55,
0x09,
0x40,
0x2e,
0x5a,
0x3f,
0x4d,
0x23,
0x46,
0x32,
0x12,
0x57,
0x2f,
0x5f,
0x33,
0x5c,
0x2e,
0x4b,
0x39,
0x39,
0x7a,
0x15,
0x7b,
0x0f,
0x7d,
0x12,
0x7e,
0x5e,
0x0e,
0x6f,
0x01,
0x64,
0x08,
0x54,
0x10,
0x75,
0x06,
0x6d,
0x19,
0x76,
0x06,
0x5a,
0x0d,
0x64,
0x0a,
0x6e,
0x01,
0x76,
0x3b,
0x5e,
0x2a,
0x58,
0x31,
0x52,
0x21,
0x21,
0x73,
0x26,
0x68,
0x2c,
0x60,
0x2c,
0x1f,
0x2d,
0x03,
0x46,
0x1e,
0x5b,
0x7b,
0x2f,
0x78,
0x3d,
0x7c,
0x37,
0x62,
0x2b,
0x05,
0x46,
0x16,
0x5a,
0x76,
0x22,
0x55,
0x30,
0x51,
0x3a,
0x76,
0x19,
0x7e,
0x11,
0x7f,
0x7f,
0x2d,
0x78,
0x36,
0x72,
0x3e,
0x72,
0x41,
0x73,
0x5d,
0x18,
0x40,
0x05,
0x25,
0x71,
0x26,
0x63,
0x22,
0x69,
0x3c,
0x75,
0x5b,
0x18,
0x48,
0x04,
0x28,
0x7c,
0x0b,
0x6e,
0x0f,
0x64,
0x29,
0x4c,
0x19,
0x69,
0x69,
0x3a,
0x55,
0x33,
0x47,
0x30,
0x51,
0x23,
0x46,
0x1a,
0x57,
0x3e,
0x5d,
0x2f,
0x40,
0x33,
0x5c,
0x3a,
0x4e,
0x12,
0x5f,
0x0c,
0x42,
0x1e,
0x4a,
0x33,
0x43,
0x26,
0x42,
0x17,
0x45,
0x09,
0x7a,
0x7a,
0x33,
0x5d,
0x29,
0x4c,
0x3e,
0x50,
0x35,
0x41,
0x61,
0x32,
0x57,
0x23,
0x57,
0x3e,
0x50,
0x37,
0x44,
0x18,
0x4d,
0x3f,
0x53,
0x73,
0x3b,
0x52,
0x21,
0x55,
0x3a,
0x48,
0x31,
0x31,
0x78,
0x16,
0x62,
0x07,
0x75,
0x1b,
0x7e,
0x0a,
0x2a,
0x79,
0x1c,
0x68,
0x1c,
0x75,
0x1b,
0x7c,
0x0f,
0x53,
0x10,
0x71,
0x12,
0x7a,
0x1f,
0x43,
0x13,
0x72,
0x06,
0x6e,
0x1d,
0x1d,
0x5e,
0x31,
0x5f,
0x2b,
0x59,
0x36,
0x5a,
0x7a,
0x2a,
0x4b,
0x25,
0x40,
0x2c,
0x70,
0x31,
0x41,
0x31,
0x54,
0x35,
0x47,
0x26,
0x48,
0x2b,
0x4e,
0x4e,
0x1a,
0x7f,
0x12,
0x62,
0x0d,
0x7f,
0x1e,
0x6c,
0x15,
0x35,
0x7c,
0x12,
0x66,
0x03,
0x71,
0x1f,
0x7a,
0x0e,
0x2e,
0x68,
0x01,
0x6d,
0x08,
0x7b,
0x7b,
0x3f,
0x50,
0x3e,
0x4a,
0x0e,
0x67,
0x14,
0x64,
0x08,
0x69,
0x10,
0x5c,
0x3d,
0x4e,
0x3a,
0x6f,
0x1c,
0x79,
0x0b,
0x45,
0x24,
0x49,
0x2c,
0x2c,
0x07,
0x44,
0x28,
0x4d,
0x2c,
0x5e,
0x0c,
0x69,
0x0a,
0x6f,
0x01,
0x75,
0x31,
0x5e,
0x3d,
0x4e,
0x01,
0x6f,
0x2a,
0x52,
0x3b,
0x4f,
0x4f,
0x01,
0x6e,
0x2f,
0x4c,
0x38,
0x51,
0x27,
0x42,
0x06,
0x63,
0x10,
0x7b,
0x0f,
0x60,
0x10,
0x53,
0x3b,
0x5a,
0x34,
0x53,
0x36,
0x45,
0x45,
0x06,
0x69,
0x07,
0x73,
0x01,
0x6e,
0x02,
0x22,
0x72,
0x13,
0x7d,
0x18,
0x74,
0x28,
0x6c,
0x09,
0x7a,
0x11,
0x65,
0x0a,
0x7a,
0x7a,
0x3e,
0x57,
0x24,
0x45,
0x27,
0x4b,
0x2e,
0x7c,
0x19,
0x7e,
0x17,
0x64,
0x10,
0x62,
0x1b,
0x4f,
0x20,
0x4f,
0x23,
0x50,
0x50,
0x13,
0x5f,
0x0c,
0x45,
0x01,
0x5d,
0x78,
0x0b,
0x57,
0x04,
0x6c,
0x09,
0x65,
0x09,
0x4f,
0x20,
0x4c,
0x28,
0x4d,
0x3f,
0x3f,
0x71,
0x1e,
0x4c,
0x29,
0x4a,
0x2f,
0x41,
0x35,
0x71,
0x1e,
0x7d,
0x0e,
0x46,
0x2f,
0x5c,
0x28,
0x47,
0x35,
0x4c,
0x4c,
0x1c,
0x7d,
0x14,
0x7a,
0x0e,
0x4a,
0x2f,
0x5c,
0x37,
0x43,
0x2c,
0x5c,
0x0a,
0x6f,
0x1d,
0x6e,
0x07,
0x68,
0x06,
0x06,
0x53,
0x20,
0x45,
0x37,
0x17,
0x44,
0x2c,
0x49,
0x25,
0x49,
0x69,
0x2f,
0x40,
0x2c,
0x48,
0x2d,
0x5f,
0x2c,
0x2c,
0x62,
0x0d,
0x49,
0x3b,
0x52,
0x24,
0x41,
0x15,
0x6c,
0x1c,
0x79,
0x38,
0x4d,
0x39,
0x56,
0x04,
0x71,
0x1f,
0x1f,
0x5b,
0x34,
0x57,
0x77,
0x31,
0x58,
0x36,
0x52,
0x72,
0x21,
0x51,
0x34,
0x57,
0x77,
0x3a,
0x68,
0x3d,
0x3d,
0x6d,
0x02,
0x6e,
0x07,
0x64,
0x0d,
0x68,
0x1b,
0x47,
0x02,
0x7a,
0x0a,
0x66,
0x09,
0x7b,
0x1e,
0x6c,
0x6c,
0x28,
0x4d,
0x3e,
0x55,
0x21,
0x4e,
0x3e,
0x62,
0x2c,
0x4d,
0x20,
0x45,
0x16,
0x66,
0x07,
0x64,
0x01,
0x01,
0x49,
0x20,
0x53,
0x27,
0x48,
0x3a,
0x43,
0x1c,
0x58,
0x31,
0x43,
0x26,
0x45,
0x31,
0x5e,
0x2c,
0x55,
0x55,
0x00,
0x6e,
0x07,
0x69,
0x1a,
0x6e,
0x0f,
0x63,
0x0f,
0x53,
0x07,
0x70,
0x15,
0x74,
0x1f,
0x4a,
0x03,
0x03,
0x4d,
0x22,
0x70,
0x15,
0x76,
0x13,
0x7d,
0x09,
0x4d,
0x22,
0x41,
0x32,
0x7f,
0x1a,
0x74,
0x01,
0x01,
0x52,
0x27,
0x45,
0x13,
0x76,
0x04,
0x77,
0x1e,
0x71,
0x1f,
0x51,
0x24,
0x49,
0x2b,
0x4e,
0x3c,
0x3c,
0x7d,
0x0d,
0x7d,
0x11,
0x74,
0x00,
0x73,
0x2f,
0x7b,
0x0c,
0x69,
0x08,
0x63,
0x36,
0x7f,
0x7f,
0x3b,
0x5e,
0x38,
0x59,
0x2c,
0x40,
0x34,
0x64,
0x05,
0x76,
0x05,
0x72,
0x1d,
0x6f,
0x0b,
0x0b,
0x5b,
0x34,
0x58,
0x31,
0x52,
0x3b,
0x5e,
0x2d,
0x71,
0x22,
0x5b,
0x28,
0x5c,
0x39,
0x54,
0x54,
0x12,
0x7b,
0x15,
0x71,
0x32,
0x5d,
0x30,
0x40,
0x35,
0x41,
0x24,
0x56,
0x1b,
0x49,
0x1c,
0x1c,
0x58,
0x3d,
0x5b,
0x3a,
0x4f,
0x23,
0x57,
0x02,
0x71,
0x14,
0x66,
0x28,
0x49,
0x24,
0x41,
0x41,
0x08,
0x66,
0x00,
0x5c,
0x08,
0x7f,
0x1a,
0x7b,
0x10,
0x65,
0x0c,
0x22,
0x6b,
0x05,
0x63,
0x63,
0x2d,
0x42,
0x04,
0x65,
0x13,
0x7c,
0x0e,
0x67,
0x13,
0x76,
0x05,
0x48,
0x2d,
0x43,
0x36,
0x36,
0x78,
0x17,
0x56,
0x35,
0x41,
0x28,
0x5e,
0x3b,
0x7f,
0x1a,
0x69,
0x02,
0x76,
0x19,
0x69,
0x69,
0x39,
0x4b,
0x24,
0x43,
0x31,
0x50,
0x3d,
0x7b,
0x12,
0x7e,
0x1b,
0x68,
0x2c,
0x45,
0x37,
0x37,
0x62,
0x0c,
0x65,
0x0b,
0x78,
0x0c,
0x6d,
0x01,
0x6d,
0x3e,
0x4a,
0x38,
0x51,
0x3f,
0x58,
0x58,
0x0b,
0x63,
0x06,
0x6a,
0x06,
0x26,
0x6f,
0x0c,
0x63,
0x0d,
0x2d,
0x7e,
0x17,
0x6d,
0x08,
0x08,
0x49,
0x39,
0x49,
0x25,
0x40,
0x34,
0x47,
0x1b,
0x49,
0x2c,
0x4b,
0x2e,
0x4a,
0x23,
0x57,
0x57,
0x14,
0x7b,
0x16,
0x7b,
0x14,
0x7a,
0x3c,
0x55,
0x39,
0x5c,
0x2f,
0x6b,
0x02,
0x70,
0x70,
0x3e,
0x51,
0x18,
0x76,
0x02,
0x67,
0x15,
0x7b,
0x1e,
0x6a,
0x23,
0x40,
0x2f,
0x41,
0x41,
0x0f,
0x60,
0x33,
0x52,
0x24,
0x41,
0x12,
0x77,
0x03,
0x77,
0x1e,
0x70,
0x17,
0x64,
0x64,
0x2a,
0x4f,
0x3b,
0x4c,
0x23,
0x51,
0x3a,
0x66,
0x34,
0x51,
0x32,
0x57,
0x39,
0x4d,
0x4d,
0x0c,
0x79,
0x0d,
0x62,
0x23,
0x47,
0x2a,
0x43,
0x2d,
0x61,
0x0e,
0x69,
0x06,
0x68,
0x68,
0x26,
0x43,
0x37,
0x40,
0x2f,
0x5d,
0x36,
0x6a,
0x26,
0x49,
0x2e,
0x41,
0x2f,
0x2f,
0x62,
0x07,
0x69,
0x1c,
0x4f,
0x27,
0x48,
0x3f,
0x7b,
0x1e,
0x72,
0x13,
0x6a,
0x6a,
0x24,
0x4b,
0x18,
0x6c,
0x0d,
0x7f,
0x0b,
0x49,
0x28,
0x46,
0x28,
0x4d,
0x3f,
0x3f,
0x7e,
0x0b,
0x6f,
0x06,
0x69,
0x2a,
0x6e,
0x32,
0x41,
0x29,
0x4c,
0x20,
0x4c,
0x4c,
0x05,
0x6b,
0x0d,
0x51,
0x02,
0x6a,
0x0f,
0x63,
0x0f,
0x21,
0x48,
0x26,
0x40,
0x40,
0x02,
0x6d,
0x02,
0x76,
0x3b,
0x5e,
0x30,
0x45,
0x01,
0x64,
0x08,
0x69,
0x10,
0x10,
0x53,
0x1c,
0x51,
0x12,
0x46,
0x0a,
0x39,
0x0b,
0x25,
0x61,
0x2d,
0x61,
0x61,
0x22,
0x4e,
0x2f,
0x5c,
0x2f,
0x46,
0x25,
0x76,
0x1e,
0x7b,
0x17,
0x7b,
0x7b,
0x28,
0x45,
0x2a,
0x45,
0x31,
0x59,
0x0a,
0x69,
0x1b,
0x74,
0x18,
0x74,
0x74,
0x00,
0x69,
0x04,
0x61,
0x05,
0x64,
0x10,
0x75,
0x5b,
0x38,
0x48,
0x24,
0x24,
0x78,
0x3c,
0x79,
0x2a,
0x61,
0x35,
0x7a,
0x2a,
0x04,
0x4d,
0x03,
0x4a,
0x4a,
0x09,
0x7c,
0x0f,
0x7b,
0x14,
0x79,
0x3a,
0x55,
0x39,
0x56,
0x24,
0x57,
0x57,
0x33,
0x5a,
0x29,
0x59,
0x35,
0x54,
0x2d,
0x03,
0x67,
0x15,
0x63,
0x63,
0x30,
0x78,
0x3d,
0x71,
0x3d,
0x0e,
0x3c,
0x12,
0x56,
0x1a,
0x56,
0x56,
0x02,
0x55,
0x10,
0x51,
0x1a,
0x4f,
0x06,
0x28,
0x60,
0x2c,
0x7c,
0x7c,
0x38,
0x51,
0x22,
0x52,
0x3e,
0x5f,
0x26,
0x68,
0x09,
0x64,
0x01,
0x01,
0x62,
0x0d,
0x63,
0x17,
0x65,
0x0a,
0x66,
0x48,
0x21,
0x4f,
0x26,
0x26,
0x72,
0x25,
0x60,
0x21,
0x6a,
0x3f,
0x76,
0x58,
0x1b,
0x4b,
0x07,
0x07,
0x50,
0x19,
0x57,
0x1e,
0x50,
0x19,
0x4d,
0x63,
0x2a,
0x64,
0x2d,
0x2d,
0x7f,
0x0a,
0x64,
0x37,
0x52,
0x20,
0x56,
0x3f,
0x5c,
0x39,
0x4a,
0x4a,
0x19,
0x71,
0x14,
0x78,
0x14,
0x34,
0x7d,
0x1e,
0x71,
0x1f,
0x6c,
0x6c,
0x1f,
0x66,
0x15,
0x61,
0x04,
0x69,
0x47,
0x2e,
0x40,
0x29,
0x29,
0x68,
0x1c,
0x68,
0x1a,
0x73,
0x11,
0x64,
0x10,
0x75,
0x06,
0x06,
0x55,
0x3a,
0x4f,
0x3d,
0x5e,
0x3b,
0x6b,
0x0a,
0x7e,
0x16,
0x16,
0x77,
0x07,
0x77,
0x00,
0x69,
0x13,
0x3d,
0x5e,
0x2e,
0x42,
0x42,
0x11,
0x65,
0x04,
0x76,
0x02,
0x22,
0x6f,
0x0a,
0x64,
0x11,
0x11,
0x75,
0x1a,
0x74,
0x53,
0x27,
0x07,
0x6b,
0x04,
0x65,
0x01,
0x01,
0x47,
0x26,
0x50,
0x3f,
0x4d,
0x24,
0x50,
0x35,
0x46,
0x46,
0x15,
0x7d,
0x18,
0x74,
0x18,
0x56,
0x33,
0x44,
0x69,
0x69,
0x3d,
0x58,
0x35,
0x45,
0x29,
0x48,
0x3c,
0x59,
0x2a,
0x2a,
0x64,
0x0b,
0x45,
0x20,
0x54,
0x1c,
0x73,
0x1c,
0x78,
0x78,
0x2b,
0x6e,
0x3a,
0x6f,
0x3f,
0x11,
0x54,
0x0c,
0x49,
0x49,
0x1c,
0x72,
0x1b,
0x75,
0x06,
0x72,
0x13,
0x7f,
0x13,
0x13,
0x40,
0x25,
0x44,
0x36,
0x55,
0x3d,
0x68,
0x1a,
0x76,
0x76,
0x34,
0x5b,
0x34,
0x40,
0x0d,
0x78,
0x14,
0x60,
0x09,
0x09,
0x4b,
0x24,
0x4b,
0x3f,
0x7b,
0x1e,
0x72,
0x13,
0x6a,
0x6a,
0x2b,
0x5e,
0x2a,
0x45,
0x16,
0x75,
0x14,
0x7a,
0x7a,
0x2a,
0x4f,
0x3d,
0x4e,
0x21,
0x4f,
0x2e,
0x42,
0x42,
0x00,
0x6f,
0x00,
0x74,
0x39,
0x5c,
0x32,
0x47,
0x47,
0x17,
0x65,
0x0a,
0x6d,
0x1f,
0x7e,
0x13,
0x60,
0x60,
0x22,
0x4d,
0x22,
0x56,
0x1d,
0x78,
0x01,
0x72,
0x72,
0x3c,
0x53,
0x17,
0x65,
0x0c,
0x7a,
0x1f,
0x6c,
0x6c,
0x27,
0x62,
0x30,
0x7e,
0x3b,
0x77,
0x44,
0x76,
0x76,
0x37,
0x5b,
0x2f,
0x6c,
0x03,
0x6f,
0x00,
0x72,
0x72,
0x34,
0x5d,
0x31,
0x54,
0x1a,
0x7b,
0x16,
0x73,
0x73,
0x1e,
0x7f,
0x16,
0x78,
0x56,
0x35,
0x45,
0x29,
0x29,
0x40,
0x2e,
0x5a,
0x36,
0x18,
0x7b,
0x0b,
0x67,
0x67,
0x03,
0x66,
0x15,
0x7e,
0x50,
0x33,
0x43,
0x2f,
0x2f,
0x61,
0x14,
0x78,
0x14,
0x52,
0x3b,
0x57,
0x32,
0x32,
0x65,
0x0c,
0x62,
0x0e,
0x61,
0x06,
0x69,
0x07,
0x07,
0x54,
0x3c,
0x59,
0x35,
0x59,
0x17,
0x72,
0x05,
0x05,
0x7d,
0x1a,
0x7b,
0x55,
0x31,
0x43,
0x35,
0x35,
0x7a,
0x0a,
0x7e,
0x17,
0x78,
0x16,
0x65,
0x65,
0x26,
0x49,
0x24,
0x49,
0x28,
0x46,
0x22,
0x22,
0x75,
0x1c,
0x72,
0x16,
0x79,
0x0e,
0x7d,
0x7d,
0x31,
0x5e,
0x39,
0x7f,
0x16,
0x7a,
0x1f,
0x1f,
0x4c,
0x38,
0x59,
0x2b,
0x5f,
0x2a,
0x5a,
0x5a,
0x18,
0x77,
0x18,
0x6c,
0x2b,
0x7e,
0x37,
0x37,
0x45,
0x20,
0x4e,
0x2f,
0x42,
0x27,
0x27,
0x74,
0x11,
0x7f,
0x1b,
0x4f,
0x20,
0x20,
0x72,
0x07,
0x69,
0x24,
0x76,
0x23,
0x23,
0x74,
0x1d,
0x73,
0x37,
0x5e,
0x2c,
0x2c,
0x7f,
0x1a,
0x6e,
0x1b,
0x6b,
0x6b,
0x2d,
0x4c,
0x39,
0x55,
0x21,
0x21,
0x0b,
0x25,
0x46,
0x36,
0x5a,
0x5a,
0x17,
0x76,
0x06,
0x55,
0x19,
0x19,
0x5a,
0x16,
0x45,
0x0c,
0x48,
0x48,
0x6d,
0x1e,
0x32,
0x17,
0x62,
0x62,
0x43,
0x6d,
0x01,
0x6f,
0x04,
0x04,
0x48,
0x27,
0x40,
0x2f,
0x2f,
0x62,
0x03,
0x6a,
0x04,
0x04,
0x52,
0x3b,
0x5e,
0x29,
0x29,
0x65,
0x0c,
0x62,
0x09,
0x09,
0x6b,
0x04,
0x6b,
0x1f,
0x1f,
0x5b,
0x3a,
0x4e,
0x2f,
0x2f,
0x01,
0x63,
0x02,
0x69,
0x69,
0x3d,
0x54,
0x24,
0x57,
0x57,
0x04,
0x6c,
0x03,
0x74,
0x74,
0x04,
0x68,
0x09,
0x70,
0x70,
0x25,
0x4b,
0x22,
0x22,
0x10,
0x29,
0x29,
0x47,
0x28,
0x28,
0x09,
0x09,
0x38,
0x38,
0x64,
0x64,
0x54,
0x54,
0x7a,
0x7a,
};
