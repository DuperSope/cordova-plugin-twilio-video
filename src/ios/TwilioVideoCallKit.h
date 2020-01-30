//
//  TwilioVideoViewController.h
//
//  Copyright © 2016-2017 Twilio, Inc. All rights reserved.
//

@import CallKit;
#import "TwilioVideoCallManager.h"
#import "TwilioVideoViewController.h"
#import "TwilioVideoEventManager.h"
#import "TwilioVideoPermissions.h"

@interface TwilioVideoCallKit: NSObject <CXProviderDelegate>

// CallKit components
@property (nonatomic, strong) CXProvider *callKitProvider;

@property (nonatomic, strong) TwilioVideoCallManager *callManager;
@property (nonatomic, strong) TwilioVideoCall *anserCall;

@property (nonatomic, strong) UIViewController *rootViewController;

+ (instancetype)getInstance;
- (void) reportIncomingCall:(UIViewController*)vc uuid:(NSUUID*)uuid roomName:(NSString*)roomName token:(NSString*)token caller:(NSString*)caller extras:(NSDictionary*)extras completion:(void (^)(NSError *_Nullable error))completion;

@end


