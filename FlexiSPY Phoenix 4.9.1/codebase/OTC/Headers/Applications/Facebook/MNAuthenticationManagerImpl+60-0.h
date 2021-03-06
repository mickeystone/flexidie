//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAPISessionStore, FBFacebookCredentials, NSString;

//@interface MNAuthenticationManagerImpl : NSObject
//{
//    FBAPISessionStore *_apiSessionStore;
//    FBFacebookCredentials *_pageCredentials;
//}

@interface MNAuthenticationManagerImpl (MNAuthenticationManagerImpl_80_0)

@property(retain) FBFacebookCredentials *pageCredentials; // @synthesize pageCredentials=_pageCredentials;
- (id)mailboxViewerCredentials;
- (void)setMailboxViewerPageCredentialsOverride:(id)arg1;
- (id)mailboxViewerFbId;
- (_Bool)hasMailboxViewer;
- (id)facebookCredentials;
- (_Bool)hasFacebookCredentials;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithApiSessionStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

