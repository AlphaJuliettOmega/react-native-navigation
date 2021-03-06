#import "RNNButtonOptions.h"
#import "RNNReactComponentRegistry.h"
#import <Foundation/Foundation.h>
#import <React/RCTRootView.h>
#import <React/RCTRootViewDelegate.h>

typedef void (^RNNButtonPressCallback)(NSString *buttonId);

@interface RNNUIBarButtonItem : UIBarButtonItem <RCTRootViewDelegate>

@property(nonatomic, strong) NSString *buttonId;

- (instancetype)initCustomIcon:(RNNButtonOptions *)buttonOptions
                       onPress:(RNNButtonPressCallback)onPress;
- (instancetype)initWithIcon:(RNNButtonOptions *)buttonOptions
                     onPress:(RNNButtonPressCallback)onPress;
- (instancetype)initWithTitle:(RNNButtonOptions *)buttonOptions
                      onPress:(RNNButtonPressCallback)onPress;
- (instancetype)initWithCustomView:(RNNReactView *)reactView
                     buttonOptions:(RNNButtonOptions *)buttonOptions
                           onPress:(RNNButtonPressCallback)onPress;
- (instancetype)initWithSystemItem:(RNNButtonOptions *)buttonOptions
                           onPress:(RNNButtonPressCallback)onPress;

- (void)notifyDidAppear;
- (void)notifyDidDisappear;

@end
