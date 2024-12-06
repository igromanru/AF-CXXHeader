#ifndef UE4SS_SDK_W_RespawnOptions_HPP
#define UE4SS_SDK_W_RespawnOptions_HPP

class UW_RespawnOptions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Bed_Flavor_Text;                                                // 0x02E8 (size: 0x8)
    class USpacer* BedSpacer;                                                         // 0x02F0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F8 (size: 0x8)
    class UButton* Button_BedRespawn;                                                 // 0x0300 (size: 0x8)
    class UButton* Button_OriginRespawn;                                              // 0x0308 (size: 0x8)
    class UButton* Button_SectorEntrance;                                             // 0x0310 (size: 0x8)
    class UButton* Button_VignetteRespawn;                                            // 0x0318 (size: 0x8)
    class UImage* Image;                                                              // 0x0320 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_181;                                                          // 0x0338 (size: 0x8)
    class UTextBlock* PortalEntrance_Flavor_Text;                                     // 0x0340 (size: 0x8)
    class UTextBlock* PunchCardLocationText;                                          // 0x0348 (size: 0x8)
    class USpacer* VignetteSpacer;                                                    // 0x0350 (size: 0x8)
    class USpacer* VignetteSpacer_1;                                                  // 0x0358 (size: 0x8)
    FName Entrance Teleporter;                                                        // 0x0360 (size: 0x8)
    FName TerminalRespawnID;                                                          // 0x0368 (size: 0x8)

    void RequestRespawn(bool RevivedOnSpot, bool UsePlayerStartOnly, FName DestinationID);
    void SetupRespawnButtons();
    void BndEvt__W_RespawnOptions_RespawnAtBed_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_RespawnOptions_RespawnAtOrigin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_RespawnOptions_RespawnAtVignette_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_RespawnOptions_Button_SectorEntrance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_RespawnOptions(int32 EntryPoint);
}; // Size: 0x370

#endif
