#ifndef UE4SS_SDK_W_NPCDebugInfo_HPP
#define UE4SS_SDK_W_NPCDebugInfo_HPP

class UW_NPCDebugInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_MainMenuButton_C* Button_DumpSpawnInfo;                                  // 0x02E8 (size: 0x8)
    class UTextBlock* DebugText;                                                      // 0x02F0 (size: 0x8)

    void DumpNPCInfo();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_NPCDebugInfo_Button_DumpSpawnInfo_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
    void ExecuteUbergraph_W_NPCDebugInfo(int32 EntryPoint);
}; // Size: 0x2F8

#endif
