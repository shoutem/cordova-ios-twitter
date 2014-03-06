//
//  TwitterPlugin.h
//  TwitterPlugin
//
//  Created by Antonelli Brian on 10/13/11.
//

#import <Cordova/CDV.h>
#import <Cordova/CDVJSON.h>
#import <Foundation/Foundation.h>
#import <Twitter/Twitter.h>
#import <Accounts/Accounts.h>

@interface TwitterPlugin : CDVPlugin <UIActionSheetDelegate>

- (void)isTwitterAvailable:(CDVInvokedUrlCommand*)command;
- (void)isTwitterSetup:(CDVInvokedUrlCommand*)command;
- (void)composeTweet:(CDVInvokedUrlCommand*)command;
- (void)getPublicTimeline:(CDVInvokedUrlCommand*)command;
- (void)getTwitterUsername:(CDVInvokedUrlCommand*)command;
- (void)getMentions:(CDVInvokedUrlCommand*)command;
- (void)getTWRequest:(CDVInvokedUrlCommand*)command;
- (void)startTWReverseAuth:(CDVInvokedUrlCommand*)command;
- (void)performCallbackOnMainThreadforJS:(NSString *)js;

@property (nonatomic, strong) ACAccountStore *accountStore;
@property (nonatomic, strong) NSArray *accountsArray;
@property (nonatomic, strong) NSString *twitterConsumerKey;
@property (nonatomic, strong) NSString *twitterConsumerSecret;
@property (nonatomic, strong) NSString *callbackId;
@end
