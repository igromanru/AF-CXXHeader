#ifndef UE4SS_SDK_W_PlayerTrait_Entry_HPP
#define UE4SS_SDK_W_PlayerTrait_Entry_HPP

class UW_PlayerTrait_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* PhDIcon;                                                            // 0x02E8 (size: 0x8)
    FName TraitRow;                                                                   // 0x02F0 (size: 0x8)

    bool IsInteractable();
    void OnLoaded_E892FE584991F909E91D389E8A4BBA47(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_W_PlayerTrait_Entry(int32 EntryPoint);
}; // Size: 0x2F8

#endif
