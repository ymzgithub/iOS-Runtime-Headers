/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameMatch;

@interface GKRecentMatchCellContentView : GKPlayerCellContentView {
    GKGameMatch *_match;
    BOOL _matched;
}

@property(retain) GKGameMatch * match;
@property BOOL matched;

+ (id)recentMatchContentView;

- (void)dealloc;
- (id)match;
- (BOOL)matched;
- (void)setMatch:(id)arg1;
- (void)setMatched:(BOOL)arg1;
- (void)updateLines;

@end