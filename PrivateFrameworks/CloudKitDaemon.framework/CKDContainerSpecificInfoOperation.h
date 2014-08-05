/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDContainerInfo, NSObject<OS_dispatch_group>;

@interface CKDContainerSpecificInfoOperation : CKDOperation  {
    bool_needUserID;
    CKDContainerInfo *_containerInfo;
    NSObject<OS_dispatch_group> *_infoFetchedGroup;
}

@property bool needUserID;
@property(copy) CKDContainerInfo * containerInfo;
@property(readonly) NSObject<OS_dispatch_group> * infoFetchedGroup;


- (id)infoFetchedGroup;
- (void)setNeedUserID:(bool)arg1;
- (id)containerInfo;
- (void)setContainerInfo:(id)arg1;
- (bool)needUserID;
- (bool)shouldCheckAppVersion;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void).cxx_destruct;
- (void)setCompletionBlock:(id)arg1;

@end