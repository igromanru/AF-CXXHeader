#ifndef UE4SS_SDK_W_Credits_GenericEntry_HPP
#define UE4SS_SDK_W_Credits_GenericEntry_HPP

class UW_Credits_GenericEntry_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class USpacer* BottomSpacer;                                                      // 0x02E8 (size: 0x8)
    class UHorizontalBox* HBox;                                                       // 0x02F0 (size: 0x8)
    class UImage* Image;                                                              // 0x02F8 (size: 0x8)
    class USpacer* ImageSpacer;                                                       // 0x0300 (size: 0x8)
    class UVerticalBox* MainVBox;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* NameText_Centered;                                              // 0x0318 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0320 (size: 0x8)
    class UUniformGridPanel* UniformGridPanel_157;                                    // 0x0328 (size: 0x8)
    FString Name;                                                                     // 0x0330 (size: 0x10)
    FString Title;                                                                    // 0x0340 (size: 0x10)
    class UTexture2D* ImageToShow;                                                    // 0x0350 (size: 0x8)
    bool SingleName;                                                                  // 0x0358 (size: 0x1)
    bool SmallText;                                                                   // 0x0359 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_W_Credits_GenericEntry(int32 EntryPoint);
}; // Size: 0x35A

#endif
