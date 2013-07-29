/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSString, UIImage;

@interface SFAirDropNode : NSObject  {
    struct __SFOperation { } *_sender;
    BOOL _unknown;
    BOOL _monogram;
    BOOL _supportsPasses;
    BOOL _supportsMixedTypes;
    id _node;
    NSString *_realName;
    UIImage *_displayIcon;
    NSString *_displayName;
    NSString *_secondaryName;
}

@property(retain) id node;
@property(retain) NSString * realName;
@property(retain) UIImage * displayIcon;
@property(retain) NSString * displayName;
@property(retain) NSString * secondaryName;
@property(getter=isUnknown) BOOL unknown;
@property(getter=isMonogram) BOOL monogram;
@property(readonly) BOOL supportsPasses;
@property(readonly) BOOL supportsMixedTypes;

+ (id)nodeWithSFNode:(struct __SFNode { }*)arg1;

- (BOOL)supportsMixedTypes;
- (BOOL)supportsPasses;
- (BOOL)isMonogram;
- (id)displayIcon;
- (id)realName;
- (void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (void)cancelSend;
- (struct CGImage { }*)createRotatedCGImageFromUIImage:(id)arg1;
- (void)setDisplayIcon:(id)arg1;
- (void)setUnknown:(BOOL)arg1;
- (void)setRealName:(id)arg1;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long)arg2 withResults:(id)arg3;
- (void)updateWithSFNode:(struct __SFNode { }*)arg1;
- (void)setSecondaryName:(id)arg1;
- (id)secondaryName;
- (BOOL)isUnknown;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (void)setNode:(id)arg1;
- (id)node;
- (void)setMonogram:(BOOL)arg1;

@end