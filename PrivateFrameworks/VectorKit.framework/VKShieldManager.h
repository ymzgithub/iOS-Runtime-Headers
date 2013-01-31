/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPShieldIndex, NSCache, VKShieldAtlas, NSMapTable;

@interface VKShieldManager : NSObject  {
    NSMapTable *_regionalAtlases;
    NSMapTable *_regionalIndexes;
    VKPShieldIndex *_defaultIndex;
    BOOL _hasLoadedDefaultIndex;
    VKShieldAtlas *_defaultAtlas;
    BOOL _hasLoadedDefaultAtlas;
    VKPShieldIndex *_defaultIndexMedium;
    BOOL _hasLoadedDefaultIndexMedium;
    VKShieldAtlas *_defaultAtlasMedium;
    BOOL _hasLoadedDefaultAtlasMedium;
    VKPShieldIndex *_defaultIndexLarge;
    BOOL _hasLoadedDefaultIndexLarge;
    VKShieldAtlas *_defaultAtlasLarge;
    BOOL _hasLoadedDefaultAtlasLarge;
    VKPShieldIndex *_defaultIndexExtraLarge;
    BOOL _hasLoadedDefaultIndexExtraLarge;
    VKShieldAtlas *_defaultAtlasExtraLarge;
    BOOL _hasLoadedDefaultAtlasExtraLarge;
    NSCache *_genericArtworks;
}

+ (id)sharedManager;

- (id)artworkForShieldType:(int)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 resourceNames:(id)arg4 style:(id)arg5 mode:(int)arg6;
- (id)_defaultAtlasForMode:(int)arg1;
- (id)_defaultIndexForMode:(int)arg1;
- (id)_atlasForName:(id)arg1;
- (id)_indexForName:(id)arg1;
- (void)_activeTileGroupChanged:(id)arg1;
- (id)artworkForShieldType:(int)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 mode:(int)arg4;
- (void)dealloc;
- (id)init;
- (void)purge;
- (void)_didReceiveMemoryWarning:(id)arg1;

@end