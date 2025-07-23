#ifndef UE4SS_SDK_QuestWaypointMarker_HPP
#define UE4SS_SDK_QuestWaypointMarker_HPP

class AQuestWaypointMarker_C : public AActor
{
    class UTextRenderComponent* TextRender;                                           // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    FQuestRowHandle QuestRow;                                                         // 0x02A8 (size: 0x20)
    bool AllowVisibleForVignettePlayers;                                              // 0x02C8 (size: 0x1)

}; // Size: 0x2C9

#endif
