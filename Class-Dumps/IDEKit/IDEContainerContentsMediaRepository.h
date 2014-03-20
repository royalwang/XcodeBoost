//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEMediaRepository.h>

#import "IDEDefaultMediaLibrary.h"

@class IDEFileReferenceContainerObserver, IDETimedInvalidatableObjectCache, NSSet;

@interface IDEContainerContentsMediaRepository : IDEMediaRepository <IDEDefaultMediaLibrary>
{
    IDEFileReferenceContainerObserver *_observer;
    id <DVTInvalidation> _containerContentObservationToken;
    IDETimedInvalidatableObjectCache *_timedCache;
}

+ (id)mediaRepositoryForContainer:(id)arg1 fileDataTypes:(id)arg2;
+ (CDUnknownBlockType)cleanupHandlerBlock;
+ (CDUnknownBlockType)updateHandlerBlock;
+ (id)containerObserverIdentifer;
+ (id)allSupportedMediaFileDataTypes;
+ (void)cleanupFileReferenceContainerObserverResult:(id)arg1 forPath:(id)arg2;
+ (id)handleFileReferenceContainerObserverChange:(long long)arg1 forPath:(id)arg2 withDataType:(id)arg3;
+ (void)discardMediaRepositoryForContainerObserver:(id)arg1;
+ (id)mediaRepositoryForContainerObserver:(id)arg1;
+ (id)containerObserverToRepositoryMap;
- (void).cxx_destruct;
- (void)fileReferenceObserverDidReportUpdatedAndAddedResourcesByPath:(id)arg1 removedPaths:(id)arg2;
- (void)willRegisterMediaRepositoryObserver;
- (void)didUnregisterMediaRepositoryObserver;
@property(readonly) NSSet *types;
- (id)resources;
- (void)primitiveInvalidate;
- (void)_startObserving;
- (id)initWithContainerObserver:(id)arg1;

@end
