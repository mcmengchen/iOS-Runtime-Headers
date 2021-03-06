/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBGroupViewExposure : PBCodable <NSCopying> {
    NSData * _feedViewExposureId;
    int  _groupArticleCountInForYou;
    int  _groupDisplayRankInForYou;
    NSString * _groupFeedId;
    int  _groupType;
    NSMutableArray * _groupedArticleIds;
    struct { 
        unsigned int groupArticleCountInForYou : 1; 
        unsigned int groupDisplayRankInForYou : 1; 
        unsigned int groupType : 1; 
        unsigned int isSubscribedToGroupFeed : 1; 
    }  _has;
    BOOL  _isSubscribedToGroupFeed;
}

@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) int groupArticleCountInForYou;
@property (nonatomic) int groupDisplayRankInForYou;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic, retain) NSMutableArray *groupedArticleIds;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasGroupArticleCountInForYou;
@property (nonatomic) BOOL hasGroupDisplayRankInForYou;
@property (nonatomic, readonly) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsSubscribedToGroupFeed;
@property (nonatomic) BOOL isSubscribedToGroupFeed;

+ (Class)groupedArticleIdsType;

- (void).cxx_destruct;
- (int)StringAsGroupType:(id)arg1;
- (void)addGroupedArticleIds:(id)arg1;
- (void)clearGroupedArticleIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedViewExposureId;
- (int)groupArticleCountInForYou;
- (int)groupDisplayRankInForYou;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (id)groupedArticleIds;
- (id)groupedArticleIdsAtIndex:(unsigned int)arg1;
- (unsigned int)groupedArticleIdsCount;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasGroupArticleCountInForYou;
- (BOOL)hasGroupDisplayRankInForYou;
- (BOOL)hasGroupFeedId;
- (BOOL)hasGroupType;
- (BOOL)hasIsSubscribedToGroupFeed;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSubscribedToGroupFeed;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setGroupArticleCountInForYou:(int)arg1;
- (void)setGroupDisplayRankInForYou:(int)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setGroupedArticleIds:(id)arg1;
- (void)setHasGroupArticleCountInForYou:(BOOL)arg1;
- (void)setHasGroupDisplayRankInForYou:(BOOL)arg1;
- (void)setHasGroupType:(BOOL)arg1;
- (void)setHasIsSubscribedToGroupFeed:(BOOL)arg1;
- (void)setIsSubscribedToGroupFeed:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
