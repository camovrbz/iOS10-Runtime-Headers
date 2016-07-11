/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIUserActionCallProviderVoiceTarget : CNUIUserActionTarget

- (id)actionsForContact:(id)arg1 schedulerProvider:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 group:(long long)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2;
- (id)externalAccountIdentifierForContact:(id)arg1 contactStore:(id)arg2;
- (bool)isCallProviderManagedUsingDiscoveringEnvironment:(id)arg1;
- (id)managedBundleIdentifierForContact:(id)arg1 discoveringEnvironment:(id)arg2;

@end