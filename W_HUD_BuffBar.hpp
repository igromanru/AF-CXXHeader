#ifndef UE4SS_SDK_W_HUD_BuffBar_HPP
#define UE4SS_SDK_W_HUD_BuffBar_HPP

class UW_HUD_BuffBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* UpsideDownBuffBox;                                            // 0x02E8 (size: 0x8)

    void DoesExistingBuffIconExist(const FBuffDebuffRowHandle& BuffToFind, bool& Exist, class UW_HUD_BuffIcon_C*& Buff Icon);
    void OnCurrentBuffsUpdated(class UCharacterBuffComponent* BuffComponent);
    void Construct();
    void ExecuteUbergraph_W_HUD_BuffBar(int32 EntryPoint);
}; // Size: 0x2F0

#endif
