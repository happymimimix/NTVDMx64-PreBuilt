NTSTATUS REG_OpenLDNTVDM(DWORD dwAccess, PHKEY phKey);
NTSTATUS REG_QueryDWORD(HKEY hKey, LPWSTR lpKey, PDWORD pdwResult);
NTSTATUS REG_SetDWORD(HKEY hKey, LPWSTR lpKey, DWORD dwData);
NTSTATUS REG_QueryQWORD(HKEY hKey, LPWSTR lpKey, PULONGLONG pdwResult);
NTSTATUS REG_SetQWORD(HKEY hKey, LPWSTR lpKey, ULONGLONG dwData);
VOID REG_CloseKey(HKEY hKey);
BOOL REG_CheckForOTVDM(void);

