#ifndef UE4SS_SDK_Deployed_Container_WasteBucket_HPP
#define UE4SS_SDK_Deployed_Container_WasteBucket_HPP

class ADeployed_Container_WasteBucket_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09E8 (size: 0x8)
    class UBoxComponent* InteractionBox;                                              // 0x09F0 (size: 0x8)
    FDataTableRowHandle WasteItemDataRow;                                             // 0x09F8 (size: 0x10)

    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    FText GetItemNameText();
    void AddWasteIntoBucket(int32 StackAmount);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_Deployed_Container_WasteBucket(int32 EntryPoint);
}; // Size: 0xA08

#endif
