#ifndef UE4SS_SDK_W_ItemAction_HPP
#define UE4SS_SDK_W_ItemAction_HPP

class UW_ItemAction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* DisplayNameText;                                                // 0x02E8 (size: 0x8)
    class UW_Keybind_C* KeyBind;                                                      // 0x02F0 (size: 0x8)
    FItemActionRowHandle ItemAction;                                                  // 0x02F8 (size: 0x20)

    void KeybindUpdated();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_ItemAction(int32 EntryPoint);
}; // Size: 0x318

#endif
