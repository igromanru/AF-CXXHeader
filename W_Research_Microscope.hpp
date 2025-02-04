#ifndef UE4SS_SDK_W_Research_Microscope_HPP
#define UE4SS_SDK_W_Research_Microscope_HPP

class UW_Research_Microscope_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* ChangeSlide;                                              // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UButton* Button_LeftLens;                                                   // 0x02F8 (size: 0x8)
    class UButton* Button_RightLens;                                                  // 0x0300 (size: 0x8)
    class UBorder* ClickDragBorder;                                                   // 0x0308 (size: 0x8)
    class UImage* ColorSwapper;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* FocusText;                                                      // 0x0318 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x0320 (size: 0x8)
    class UBackgroundBlur* Microscope_Blur;                                           // 0x0328 (size: 0x8)
    class UCanvasPanel* RotationCanvas;                                               // 0x0330 (size: 0x8)
    class UImage* Rotator;                                                            // 0x0338 (size: 0x8)
    class UTextBlock* SchematicTitle;                                                 // 0x0340 (size: 0x8)
    TArray<FVector2D> lens;                                                           // 0x0348 (size: 0x10)
    TArray<double> LensTypes;                                                         // 0x0358 (size: 0x10)
    TEnumAsByte<E_MicroscopeMinigameLenses::Type> CurrentLens;                        // 0x0368 (size: 0x1)
    int32 ActiveLensType;                                                             // 0x036C (size: 0x4)
    double FocusRangeA;                                                               // 0x0370 (size: 0x8)
    double FocusRangeB;                                                               // 0x0378 (size: 0x8)
    FTimerHandle LensChangeTimer;                                                     // 0x0380 (size: 0x8)
    double CurrentFocus;                                                              // 0x0388 (size: 0x8)
    bool IsDraggingMouse;                                                             // 0x0390 (size: 0x1)
    double LastRotationTickAngle;                                                     // 0x0398 (size: 0x8)

    void ChangeAngle(double MovementValue);
    FEventReply On_ClickDragBorder_MouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply On_ClickDragBorder_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetLensBorderColor();
    void UpdateBlurAmount();
    void ChangeLensType(bool Right);
    void SetupNewMicroscopeMinigame();
    void BndEvt__W_Research_Microscope_Button_LeftLens_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void CompleteRecipe();
    void BndEvt__W_Research_Microscope_Button_RightLens_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Research_Microscope(int32 EntryPoint);
}; // Size: 0x3A0

#endif
