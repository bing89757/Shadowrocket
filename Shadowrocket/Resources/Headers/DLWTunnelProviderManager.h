//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NETunnelProviderManager;

@interface DLWTunnelProviderManager : NSObject
{
    NETunnelProviderManager *_tunnelProviderManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NETunnelProviderManager *tunnelProviderManager; // @synthesize tunnelProviderManager=_tunnelProviderManager;
- (void).cxx_destruct;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)connection;
- (void)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromAllPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
