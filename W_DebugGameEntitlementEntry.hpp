#ifndef UE4SS_SDK_W_DebugGameEntitlementEntry_HPP
#define UE4SS_SDK_W_DebugGameEntitlementEntry_HPP

class UW_DebugGameEntitlementEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TooltipTextLine;                                                // 0x02E8 (size: 0x8)
    FGameEntitlementRowHandle EntitlementRow;                                         // 0x02F0 (size: 0x20)

    void Construct();
    void UpdateUnlockedState();
    void ExecuteUbergraph_W_DebugGameEntitlementEntry(int32 EntryPoint);
}; // Size: 0x310

#endif
