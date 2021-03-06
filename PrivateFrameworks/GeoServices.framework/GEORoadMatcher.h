/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadMatcher : NSObject <GEOMapAccessRestrictions> {
    GEOMapAccess * _map;
    BOOL  _useRawLocations;
}

@property (nonatomic, readonly) BOOL allowsNetworkTileLoad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useRawLocations;

- (id)_bestSegmentForTile:(id)arg1 location:(id)arg2 transportType:(int)arg3;
- (id)_tilesAround:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (BOOL)allowsNetworkTileLoad;
- (void)dealloc;
- (id)init;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
- (void)setUseRawLocations:(BOOL)arg1;
- (BOOL)useRawLocations;

@end
