/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderFilter : NSObject {
    NSArray * _allIdentityProviders;
    bool  _shouldExcludeUnsupportedProviders;
    NSArray * _supportedAccountProviderIDs;
}

@property (nonatomic, copy) NSArray *allIdentityProviders;
@property (nonatomic, readonly, copy) NSArray *filteredIdentityProviders;
@property (nonatomic) bool shouldExcludeUnsupportedProviders;
@property (nonatomic, copy) NSArray *supportedAccountProviderIDs;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;

- (void).cxx_destruct;
- (id)allIdentityProviders;
- (id)filteredIdentityProviders;
- (id)init;
- (void)setAllIdentityProviders:(id)arg1;
- (void)setShouldExcludeUnsupportedProviders:(bool)arg1;
- (void)setSupportedAccountProviderIDs:(id)arg1;
- (bool)shouldExcludeUnsupportedProviders;
- (id)supportedAccountProviderIDs;

@end