extern uint32 cppISteamParties_SteamParties002_GetNumActiveBeacons(void *);
extern PartyBeaconID_t cppISteamParties_SteamParties002_GetBeaconByIndex(void *, uint32);
extern bool cppISteamParties_SteamParties002_GetBeaconDetails(void *, PartyBeaconID_t, CSteamID *, winSteamPartyBeaconLocation_t_157 *, char *, int);
extern SteamAPICall_t cppISteamParties_SteamParties002_JoinParty(void *, PartyBeaconID_t);
extern bool cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations(void *, uint32 *);
extern bool cppISteamParties_SteamParties002_GetAvailableBeaconLocations(void *, winSteamPartyBeaconLocation_t_157 *, uint32);
extern SteamAPICall_t cppISteamParties_SteamParties002_CreateBeacon(void *, uint32, winSteamPartyBeaconLocation_t_157 *, const char *, const char *);
extern void cppISteamParties_SteamParties002_OnReservationCompleted(void *, PartyBeaconID_t, CSteamID);
extern void cppISteamParties_SteamParties002_CancelReservation(void *, PartyBeaconID_t, CSteamID);
extern SteamAPICall_t cppISteamParties_SteamParties002_ChangeNumOpenSlots(void *, PartyBeaconID_t, uint32);
extern bool cppISteamParties_SteamParties002_DestroyBeacon(void *, PartyBeaconID_t);
extern bool cppISteamParties_SteamParties002_GetBeaconLocationData(void *, winSteamPartyBeaconLocation_t_157, ESteamPartyBeaconLocationData, char *, int);
