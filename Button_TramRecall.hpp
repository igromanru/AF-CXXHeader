#ifndef UE4SS_SDK_Button_TramRecall_HPP
#define UE4SS_SDK_Button_TramRecall_HPP

class AButton_TramRecall_C : public AButton_Tram_C
{
    class ATram_ParentBP_C* TramReference;                                            // 0x0438 (size: 0x8)
    class ATramSystem_Station_C* LinkedStation;                                       // 0x0440 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
}; // Size: 0x448

#endif
