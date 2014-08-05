/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController  {
    UIView *_counterRotatedView;
    double _counterRotatedAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _counterRotatedOriginalBounds;
}


- (void)dealloc;
- (void)_removeCounterRotation;
- (bool)_shouldChangeStatusBarViewController;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)transitionDidFinish:(bool)arg1;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (bool)_shouldRespectDefinesPresentationContext;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (void)_setPresentedViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;

@end