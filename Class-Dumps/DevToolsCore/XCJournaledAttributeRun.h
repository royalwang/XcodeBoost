//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCAttributeRun.h>

@class NSMutableSet;

@interface XCJournaledAttributeRun : XCAttributeRun
{
    unsigned long long operationInProgress;
    NSMutableSet *allAttributes;
    struct {
        int op;
        struct _NSRange range;
        void *attrs;
    } recentOperations[1024];
    long long nextJournalEntry;
    XCAttributeRun *checkpoint;
    BOOL dontDumpState;
    BOOL changeTrackingErrorEncountered;
}

+ (id)restoreFromReplayData:(id)arg1;
+ (void)replayTrackingFile:(id)arg1;
- (void)replayOperation:(id)arg1;
- (void)trackOperation:(int)arg1 range:(struct _NSRange)arg2 attributes:(void *)arg3;
- (void)checkpoint;
- (void)trackingError:(id)arg1;
- (void)deleteRange:(struct _NSRange)arg1;
- (void)insertAttributes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)setAttributes:(void *)arg1 range:(struct _NSRange)arg2;
- (void *)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)dealloc;
- (id)initWithObjectAttributes:(BOOL)arg1 coalescesAttributes:(BOOL)arg2;

@end
