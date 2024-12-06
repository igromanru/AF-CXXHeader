#ifndef UE4SS_SDK_W_Character_Job_Selection_HPP
#define UE4SS_SDK_W_Character_Job_Selection_HPP

class UW_Character_Job_Selection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PopStartingPoints;                                        // 0x02E8 (size: 0x8)
    class UImage* BG1;                                                                // 0x02F0 (size: 0x8)
    class UImage* BG1_1;                                                              // 0x02F8 (size: 0x8)
    class UImage* BG1_2;                                                              // 0x0300 (size: 0x8)
    class UImage* BG1_3;                                                              // 0x0308 (size: 0x8)
    class UImage* BGMain;                                                             // 0x0310 (size: 0x8)
    class UW_MainMenuButton_C* Button_Finish;                                         // 0x0318 (size: 0x8)
    class UTextBlock* CurrentJobDescText;                                             // 0x0320 (size: 0x8)
    class UTextBlock* CurrentJobSkillsText;                                           // 0x0328 (size: 0x8)
    class UTextBlock* CurrentJobTitle_Text;                                           // 0x0330 (size: 0x8)
    class UImage* Image_JobIcon;                                                      // 0x0338 (size: 0x8)
    class UImage* JobBanner;                                                          // 0x0340 (size: 0x8)
    class UScrollBox* Scrollbox_PhDs;                                                 // 0x0348 (size: 0x8)
    class UTextBlock* StartingPointsCountText;                                        // 0x0350 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton;                                      // 0x0358 (size: 0x8)
    class UW_MainMenuButton_Strict_C* W_MainMenuButton_Strict;                        // 0x0360 (size: 0x8)
    class UW_UIPopup_Generic_C* W_UIPopup_Generic;                                    // 0x0368 (size: 0x8)
    class UW_Character_Trait_Selection_C* ParentTraitSelectMenu;                      // 0x0370 (size: 0x8)
    FName LastSelectedJob;                                                            // 0x0378 (size: 0x8)

    void UpdateSelectedJobInfo(FTrait_Struct JobData, FString AttributeInfo);
    void OnFailure_F294E4EE4E039DC6363DA8B2C6FAFCC3();
    void OnSuccess_F294E4EE4E039DC6363DA8B2C6FAFCC3();
    void SaveWorld_BB5507364C3F00F0785F918A0BF20768(bool bSuccess);
    void OnLoaded_9C92B12048D674D15D2C58B8197D9478(class UObject* Loaded);
    void Construct();
    void BndEvt__W_Character_Job_Selection_W_MainMenuButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_Character_Job_Selection_Button_Finish_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void LoadAndDisplayJobBanner(FSimpleTexture2D_Struct JobBanner);
    void ExecuteUbergraph_W_Character_Job_Selection(int32 EntryPoint);
}; // Size: 0x380

#endif
