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
@property (nonatomic, strong) CXProvider * _Nullable callKitProvider;

+ (instancetype _Nonnull)getInstance;
- (void)reportIncomingCallWith:(NSUUID*_Nullable)uuid roomName:(NSString*_Nullable)roomName token:(NSString*_Nullable)token caller:(NSString*_Nullable)caller extras:(NSDictionary*_Nullable)extras completion:(void (^_Nullable)(NSError *_Nullable error))completion;

@end


