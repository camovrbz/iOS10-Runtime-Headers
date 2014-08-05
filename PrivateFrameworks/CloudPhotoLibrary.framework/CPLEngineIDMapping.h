/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString, CPLPlatformObject;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) CPLPlatformObject * platformObject;


- (bool)removeMappingForCloudIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hasPendingIdentifiers;
- (bool)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id*)arg3;
- (bool)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(bool)arg3 error:(id*)arg4;
- (id)localIdentifiersForCloudIdentifiers:(id)arg1;
- (id)cloudIdentifiersForLocalIdentifiers:(id)arg1;
- (id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (bool)markAllPendingIdentifiersAsFinalWithError:(id*)arg1;
- (id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(bool*)arg2;
- (bool)resetAllFinalCloudIdentifiersWithError:(id*)arg1;
- (bool)resetWithError:(id*)arg1;

@end