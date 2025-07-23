#ifndef UE4SS_SDK_W_DebugGameEntitlements_HPP
#define UE4SS_SDK_W_DebugGameEntitlements_HPP

class UW_DebugGameEntitlements_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* EntitlementList;                                              // 0x02E8 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_DebugGameEntitlements(int32 EntryPoint);
}; // Size: 0x2F0

#endif
