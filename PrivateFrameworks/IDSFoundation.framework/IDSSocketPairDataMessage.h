/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData, NSString;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage  {
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _offset;
    NSData *_data;
    bool_expectsPeerResponse;
    bool_wantsAppAck;
    bool_compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
}

@property unsigned int sequenceNumber;
@property(readonly) unsigned short streamID;
@property(retain,readonly) NSData * data;
@property(readonly) bool expectsPeerResponse;
@property(readonly) bool wantsAppAck;
@property bool compressed;
@property(retain,readonly) NSString * peerResponseIdentifier;
@property(retain,readonly) NSString * messageUUID;


- (bool)wantsAppAck;
- (id)peerResponseIdentifier;
- (id)messageUUID;
- (bool)compressed;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(bool)arg3 wantsAppAck:(bool)arg4 compressed:(bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8;
- (unsigned short)streamID;
- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (bool)expectsPeerResponse;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setCompressed:(bool)arg1;
- (unsigned char)command;
- (unsigned int)sequenceNumber;
- (id)data;
- (void)dealloc;

@end