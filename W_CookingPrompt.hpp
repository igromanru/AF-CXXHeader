#ifndef UE4SS_SDK_W_CookingPrompt_HPP
#define UE4SS_SDK_W_CookingPrompt_HPP

class UW_CookingPrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PotSteam;                                                 // 0x02E8 (size: 0x8)
    class UWidgetAnimation* SoupFloatyBits;                                           // 0x02F0 (size: 0x8)
    class UImage* Bubble1;                                                            // 0x02F8 (size: 0x8)
    class UImage* Bubble2;                                                            // 0x0300 (size: 0x8)
    class UImage* Bubble3;                                                            // 0x0308 (size: 0x8)
    class UW_InventoryItemSlot_C* CookingSlot1;                                       // 0x0310 (size: 0x8)
    class UW_InventoryItemSlot_C* CookingSlot2;                                       // 0x0318 (size: 0x8)
    class UW_InventoryItemSlot_C* CookingSlot3;                                       // 0x0320 (size: 0x8)
    class UTextBlock* LiquidTypeText;                                                 // 0x0328 (size: 0x8)
    class UImage* PotBG;                                                              // 0x0330 (size: 0x8)
    class UImage* PotEdges;                                                           // 0x0338 (size: 0x8)
    class UProgressBar* ProgressBar_Liquid;                                           // 0x0340 (size: 0x8)
    class UTextBlock* RecipeName;                                                     // 0x0348 (size: 0x8)
    class UTextBlock* SoupStatusText;                                                 // 0x0350 (size: 0x8)
    class UImage* Steam1;                                                             // 0x0358 (size: 0x8)
    class UImage* Steam2;                                                             // 0x0360 (size: 0x8)
    class UImage* Steam3;                                                             // 0x0368 (size: 0x8)
    TArray<FAbioticItemCount_Struct> CachedIngredients;                               // 0x0370 (size: 0x10)
    class ACookingProxy_BP_C* CookingProxy;                                           // 0x0380 (size: 0x8)
    int32 CachedLiquidLevel;                                                          // 0x0388 (size: 0x4)

    void CheckCookingValid();
    void UpdateSoupDetails();
    void AddIngredient(FAbioticItemCount_Struct Item, class UW_InventoryItemSlot_C* Slot);
    void Construct();
    void OnSoupDisplayUpdated();
    void OnProxyDestroyed(class AActor* DestroyedActor);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetNewCookingProxy(class ACookingProxy_BP_C* Proxy);
    void ExecuteUbergraph_W_CookingPrompt(int32 EntryPoint);
}; // Size: 0x38C

#endif
