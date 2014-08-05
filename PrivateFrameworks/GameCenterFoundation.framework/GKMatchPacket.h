/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSData;

@interface GKMatchPacket : NSObject  {
    unsigned char _version;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    unsigned short _checksum;
    bool_valid;
    NSData *_data;
}

@property unsigned char version;
@property unsigned char packetType;
@property unsigned int sequenceNumber;
@property unsigned int totalLength;
@property unsigned short checksum;
@property bool valid;
@property(retain) NSData * data;


- (void)setChecksum:(unsigned short)arg1;
- (unsigned char)packetType;
- (id)initWithMessage:(id)arg1;
- (unsigned int)totalLength;
- (void)setTotalLength:(unsigned int)arg1;
- (void)setPacketType:(unsigned char)arg1;
- (unsigned short)checksum;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setValid:(bool)arg1;
- (bool)valid;
- (id)message;
- (unsigned int)sequenceNumber;
- (unsigned char)version;
- (id)init;
- (id)data;
- (void)dealloc;
- (void)setVersion:(unsigned char)arg1;
- (void)setData:(id)arg1;

@end