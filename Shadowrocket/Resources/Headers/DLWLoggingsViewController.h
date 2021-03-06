//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLWViewController.h"

#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class NSObject, NSString, RETableViewSection;
@protocol OS_dispatch_queue;

@interface DLWLoggingsViewController : DLWViewController <UIViewControllerPreviewingDelegate>
{
    long long _loggingType;
    RETableViewSection *_loggingsSection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RETableViewSection *loggingsSection; // @synthesize loggingsSection=_loggingsSection;
@property(nonatomic) long long loggingType; // @synthesize loggingType=_loggingType;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didLoadCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadLoggingFiles;
- (id)loggingPathPrefix;
- (void)moreButtonTouched:(id)arg1;
- (void)setupMoreButton;
- (void)setupTableViewManager;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

