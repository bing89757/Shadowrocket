//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSString;

@interface DLWRuleManager : NSObject
{
    NSString *_name;
    NSString *_path;
    FMDatabaseQueue *_queue;
}

+ (id)sharedInstance;
+ (id)surgeConfigFromDatabase:(id)arg1;
+ (_Bool)createSurgeConfigFile:(id)arg1 fromDatabase:(id)arg2;
+ (id)configDatabaseFiles;
+ (id)databaseDirectory;
+ (id)databaseFileFromConfigFile:(id)arg1;
+ (_Bool)createDatabaseFromFile:(id)arg1 name:(id)arg2;
+ (_Bool)createDatabaseFromConfig:(id)arg1 name:(id)arg2;
+ (void)resetDefaultConfig;
+ (void)buildDefaultConfig;
+ (void)buildConfigsIfNeeded;
@property(retain, nonatomic) FMDatabaseQueue *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)buildWithDatabase:(id)arg1;
- (void)upgradeDatabase:(id)arg1;
- (id)databases;
- (id)ruleFilePath;
- (id)urlRewritePath;
- (id)hostsConfigPath;
- (id)exceptionDomainList;
- (id)bypassTunRoutes;
- (id)cidrs;
- (id)mitmHostnames;
- (id)mitm;
- (id)proxyNames;
- (id)userAgents;
- (id)DNSServers;
- (id)allSummary;
- (void)reloadWithName:(id)arg1;
- (_Bool)removeDataForFile:(id)arg1;
- (id)dataForName:(id)arg1 key:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)defaultSkipProxy;
- (id)defaultBypassTun;
- (id)systemRules;
- (void)store:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)init;

@end
