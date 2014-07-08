/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSString, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
    WebHistoryItemPrivate *_private;
}

@property(copy,readonly) NSString * originalURLString;
@property(copy,readonly) NSString * URLString;
@property(copy,readonly) NSString * title;
@property(readonly) double lastVisitedTimeInterval;
@property(copy) NSString * alternateTitle;

+ (id)entryWithURL:(id)arg1;
+ (void)initialize;

- (bool)_hasCachedPageExpired;
- (bool)_isInPageCache;
- (void)_setSharedLinkUniqueIdentifier:(id)arg1;
- (void)_setBookmarkID:(unsigned int)arg1;
- (unsigned int)_bookmarkID;
- (id)_redirectURLs;
- (void)_setTransientProperty:(id)arg1 forKey:(id)arg2;
- (id)_transientPropertyForKey:(id)arg1;
- (id)targetItem;
- (void)setAlwaysAttemptToUsePageCache:(bool)arg1;
- (void)setRSSFeedReferrer:(id)arg1;
- (id)RSSFeedReferrer;
- (bool)isTargetItem;
- (id)_sharedLinkUniqueIdentifier;
- (id)_viewportArguments;
- (id)initWithURL:(id)arg1 target:(id)arg2 parent:(id)arg3 title:(id)arg4;
- (id)alternateTitle;
- (void)setAlternateTitle:(id)arg1;
- (id)originalURLString;
- (void)_setViewportArguments:(id)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithWebCoreHistoryItem:(struct PassRefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x1; })arg1;
- (id)URLString;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (void)_visitedWithTitle:(id)arg1;
- (double)lastVisitedTimeInterval;
- (void)setViewState:(id)arg1;
- (struct CGPoint { double x1; double x2; })scrollPoint;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentationIncludingChildren:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)URL;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)target;
- (id)dictionaryRepresentation;
- (struct CGPoint { double x1; double x2; })_scrollPoint;
- (void)_setScale:(float)arg1 isInitial:(bool)arg2;
- (void)_setScrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)lastVisitWasFailure;
- (bool)_scaleIsInitial;
- (float)_scale;
- (id)children;

@end
