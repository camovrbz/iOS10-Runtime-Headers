/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UINavigationController, NSArray, SKUIClientContext, <SKUINavigationDocumentDelegate>, NSString, NSMutableArray;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {
    SKUIClientContext *_clientContext;
    <SKUINavigationDocumentDelegate> *_delegate;
    UINavigationController *_navigationController;
    UINavigationController *_overrideNavigationController;
    NSMutableArray *_stackItems;
}

@property(readonly) UINavigationController * navigationController;
@property(retain) SKUIClientContext * clientContext;
@property <SKUINavigationDocumentDelegate> * delegate;
@property(retain) UINavigationController * overrideNavigationController;
@property(copy,readonly) NSArray * documentStackItems;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (id)documents;
- (void)setOverrideNavigationController:(id)arg1;
- (id)overrideNavigationController;
- (void)setStackItems:(id)arg1 animated:(bool)arg2;
- (void)garbageCollectDocuments;
- (void)popAllDocuments;
- (void)_unloadAllStackItems;
- (void)_handleStackDidChange;
- (id)_activeNavigationController;
- (id)documentStackItems;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)initWithNavigationController:(id)arg1;
- (void)removeDocument:(id)arg1;
- (void)clear;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)navigationController;

@end