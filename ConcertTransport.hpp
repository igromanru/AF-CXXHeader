#ifndef UE4SS_SDK_ConcertTransport_HPP
#define UE4SS_SDK_ConcertTransport_HPP

#include "ConcertTransport_enums.hpp"

struct FConcertAckData : public FConcertMessageData
{
    int64 AckSendTimeTicks;                                                           // 0x0030 (size: 0x8)
    FGuid SourceMessageId;                                                            // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FConcertEndpointClosedData : public FConcertMessageData
{
}; // Size: 0x30

struct FConcertEndpointDiscoveryEvent : public FConcertEventData
{
    EConcertMessageVersion ConcertProtocolVersion;                                    // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FConcertEndpointSettings
{
    bool bEnableLogging;                                                              // 0x0000 (size: 0x1)
    int32 PurgeProcessedMessageDelaySeconds;                                          // 0x0004 (size: 0x4)
    int32 RemoteEndpointTimeoutSeconds;                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FConcertEventData : public FConcertMessageData
{
}; // Size: 0x30

struct FConcertKeepAlive : public FConcertMessageData
{
}; // Size: 0x30

struct FConcertLocalIdentifierState
{
    TArray<FString> MappedNames;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertMessageData
{
    FGuid ConcertEndpointId;                                                          // 0x0008 (size: 0x10)
    FGuid MessageId;                                                                  // 0x0018 (size: 0x10)
    uint16 MessageOrderIndex;                                                         // 0x0028 (size: 0x2)
    uint16 ChannelId;                                                                 // 0x002A (size: 0x2)

}; // Size: 0x30

struct FConcertReliableHandshakeData : public FConcertEndpointDiscoveryEvent
{
    EConcertReliableHandshakeState HandshakeState;                                    // 0x0038 (size: 0x1)
    uint16 ReliableChannelId;                                                         // 0x003A (size: 0x2)
    uint16 NextMessageIndex;                                                          // 0x003C (size: 0x2)
    int64 EndpointTimeoutTick;                                                        // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FConcertRequestData : public FConcertMessageData
{
}; // Size: 0x30

struct FConcertResponseData : public FConcertMessageData
{
    FGuid RequestMessageId;                                                           // 0x0030 (size: 0x10)
    EConcertResponseCode ResponseCode;                                                // 0x0040 (size: 0x1)
    FText Reason;                                                                     // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FConcertSendResendPending
{
}; // Size: 0x1

class UConcertEndpointConfig : public UObject
{
    FConcertEndpointSettings EndpointSettings;                                        // 0x0028 (size: 0xC)

}; // Size: 0x38

#endif
