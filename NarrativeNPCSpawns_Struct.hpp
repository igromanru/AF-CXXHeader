#ifndef UE4SS_SDK_NarrativeNPCSpawns_Struct_HPP
#define UE4SS_SDK_NarrativeNPCSpawns_Struct_HPP

struct FNarrativeNPCSpawns_Struct
{
    FName NPCRowName_9_B57E262747F363E235064B9F98FACA40;                              // 0x0000 (size: 0x8)
    TSoftObjectPtr<ANPCSpawn_Narrative_C> PreferredSpawn_24_F8BD57F34B044675CDD41AB96F2F03CA; // 0x0008 (size: 0x28)
    TArray<TSoftObjectPtr<ANPCSpawn_Narrative_C>> CachedSpawns_25_CC2477FD47777DBA1ED401A5B44F893F; // 0x0030 (size: 0x10)
    class UNarrativeNPCLureComponent_C* PreferredLure_43_C7F476E540625B7351D9669B97C12634; // 0x0040 (size: 0x8)
    TArray<class UNarrativeNPCLureComponent_C*> CachedLures_44_0B08235448EC22CFC0E375A8F418FD46; // 0x0048 (size: 0x10)
    FDataTableRowHandle TradeItemsRow_42_F0DF4F674D1D03B6366AD586C8422542;            // 0x0058 (size: 0x10)
    TArray<int32> TradeStock_40_DA0C4F0B49D178F54FB3648F09624F0A;                     // 0x0068 (size: 0x10)

}; // Size: 0x78

#endif
