#ifndef UE4SS_SDK_W_OsAppIconButton_HPP
#define UE4SS_SDK_W_OsAppIconButton_HPP

class UW_OsAppIconButton_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* EmailFolder_NameText;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_44;                                                           // 0x02F0 (size: 0x8)
    FW_OsAppIconButton_COnClicked OnClicked;                                          // 0x02F8 (size: 0x10)
    void OnClicked(class UW_OsAppIconButton_C* Widget, FName ButtonID);
    FText DisplayName;                                                                // 0x0308 (size: 0x10)
    TSoftObjectPtr<UTexture2D> IconTexture;                                           // 0x0318 (size: 0x28)
    bool Clicking;                                                                    // 0x0340 (size: 0x1)
    FName ButtonID;                                                                   // 0x0344 (size: 0x8)

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Init(FText DisplayName, TSoftObjectPtr<UTexture2D> IconTexture);
    void Construct();
    void ExecuteUbergraph_W_OsAppIconButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UW_OsAppIconButton_C* Widget, FName ButtonID);
}; // Size: 0x34C

#endif
