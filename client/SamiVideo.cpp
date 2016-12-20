
#include "SamiVideo.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVideo::SamiVideo() {
    init();
}

SamiVideo::~SamiVideo() {
    this->cleanup();
}

void
SamiVideo::init() {
    pActive = null;
pAuthor = null;
pAuthored = null;
pBanned = null;
pCategory_id = null;
pCategory_name = null;
pContributors = null;
pCreated = null;
pEmbed = null;
pExtension = null;
pHeight = null;
pId = null;
pLength = null;
pLocation = null;
pLong_description = null;
pMime_type = null;
pName = null;
pPriority = null;
pPrivacy = null;
pPublished = null;
pShort_description = null;
pSize = null;
pTags = null;
pThumbnail = null;
pUpdated = null;
pUploader = null;
pViews = null;
pWhitelist = null;
pWidth = null;
}

void
SamiVideo::cleanup() {
    if(pActive != null) {
        
        delete pActive;
        pActive = null;
    }
if(pAuthor != null) {
        
        delete pAuthor;
        pAuthor = null;
    }
if(pAuthored != null) {
        
        delete pAuthored;
        pAuthored = null;
    }
if(pBanned != null) {
        
        delete pBanned;
        pBanned = null;
    }
if(pCategory_id != null) {
        
        delete pCategory_id;
        pCategory_id = null;
    }
if(pCategory_name != null) {
        
        delete pCategory_name;
        pCategory_name = null;
    }
if(pContributors != null) {
        
        delete pContributors;
        pContributors = null;
    }
if(pCreated != null) {
        
        delete pCreated;
        pCreated = null;
    }
if(pEmbed != null) {
        
        delete pEmbed;
        pEmbed = null;
    }
if(pExtension != null) {
        
        delete pExtension;
        pExtension = null;
    }
if(pHeight != null) {
        
        delete pHeight;
        pHeight = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLength != null) {
        
        delete pLength;
        pLength = null;
    }
if(pLocation != null) {
        
        delete pLocation;
        pLocation = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pMime_type != null) {
        
        delete pMime_type;
        pMime_type = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPriority != null) {
        
        delete pPriority;
        pPriority = null;
    }
if(pPrivacy != null) {
        
        delete pPrivacy;
        pPrivacy = null;
    }
if(pPublished != null) {
        
        delete pPublished;
        pPublished = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pSize != null) {
        
        delete pSize;
        pSize = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pThumbnail != null) {
        
        delete pThumbnail;
        pThumbnail = null;
    }
if(pUpdated != null) {
        
        delete pUpdated;
        pUpdated = null;
    }
if(pUploader != null) {
        
        delete pUploader;
        pUploader = null;
    }
if(pViews != null) {
        
        delete pViews;
        pViews = null;
    }
if(pWhitelist != null) {
        pWhitelist->RemoveAll(true);
        delete pWhitelist;
        pWhitelist = null;
    }
if(pWidth != null) {
        
        delete pWidth;
        pWidth = null;
    }
}


SamiVideo*
SamiVideo::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiVideo::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActiveKey = new JsonString(L"active");
        IJsonValue* pActiveVal = null;
        pJsonObject->GetValue(pActiveKey, pActiveVal);
        if(pActiveVal != null) {
            
            pActive = new Boolean(false);
            jsonToValue(pActive, pActiveVal, L"Boolean", L"Boolean");
        }
        delete pActiveKey;
JsonString* pAuthorKey = new JsonString(L"author");
        IJsonValue* pAuthorVal = null;
        pJsonObject->GetValue(pAuthorKey, pAuthorVal);
        if(pAuthorVal != null) {
            
            pAuthor = new SamiArtist();
            jsonToValue(pAuthor, pAuthorVal, L"SamiArtist", L"SamiArtist");
        }
        delete pAuthorKey;
JsonString* pAuthoredKey = new JsonString(L"authored");
        IJsonValue* pAuthoredVal = null;
        pJsonObject->GetValue(pAuthoredKey, pAuthoredVal);
        if(pAuthoredVal != null) {
            
            pAuthored = new Long();
            jsonToValue(pAuthored, pAuthoredVal, L"Long", L"Long");
        }
        delete pAuthoredKey;
JsonString* pBannedKey = new JsonString(L"banned");
        IJsonValue* pBannedVal = null;
        pJsonObject->GetValue(pBannedKey, pBannedVal);
        if(pBannedVal != null) {
            
            pBanned = new Boolean(false);
            jsonToValue(pBanned, pBannedVal, L"Boolean", L"Boolean");
        }
        delete pBannedKey;
JsonString* pCategory_idKey = new JsonString(L"category_id");
        IJsonValue* pCategory_idVal = null;
        pJsonObject->GetValue(pCategory_idKey, pCategory_idVal);
        if(pCategory_idVal != null) {
            
            pCategory_id = new String();
            jsonToValue(pCategory_id, pCategory_idVal, L"String", L"String");
        }
        delete pCategory_idKey;
JsonString* pCategory_nameKey = new JsonString(L"category_name");
        IJsonValue* pCategory_nameVal = null;
        pJsonObject->GetValue(pCategory_nameKey, pCategory_nameVal);
        if(pCategory_nameVal != null) {
            
            pCategory_name = new String();
            jsonToValue(pCategory_name, pCategory_nameVal, L"String", L"String");
        }
        delete pCategory_nameKey;
JsonString* pContributorsKey = new JsonString(L"contributors");
        IJsonValue* pContributorsVal = null;
        pJsonObject->GetValue(pContributorsKey, pContributorsVal);
        if(pContributorsVal != null) {
            
            pContributors = new SamiCollection«VideoContribution»();
            jsonToValue(pContributors, pContributorsVal, L"SamiCollection«VideoContribution»", L"SamiCollection«VideoContribution»");
        }
        delete pContributorsKey;
JsonString* pCreatedKey = new JsonString(L"created");
        IJsonValue* pCreatedVal = null;
        pJsonObject->GetValue(pCreatedKey, pCreatedVal);
        if(pCreatedVal != null) {
            
            pCreated = new Long();
            jsonToValue(pCreated, pCreatedVal, L"Long", L"Long");
        }
        delete pCreatedKey;
JsonString* pEmbedKey = new JsonString(L"embed");
        IJsonValue* pEmbedVal = null;
        pJsonObject->GetValue(pEmbedKey, pEmbedVal);
        if(pEmbedVal != null) {
            
            pEmbed = new String();
            jsonToValue(pEmbed, pEmbedVal, L"String", L"String");
        }
        delete pEmbedKey;
JsonString* pExtensionKey = new JsonString(L"extension");
        IJsonValue* pExtensionVal = null;
        pJsonObject->GetValue(pExtensionKey, pExtensionVal);
        if(pExtensionVal != null) {
            
            pExtension = new String();
            jsonToValue(pExtension, pExtensionVal, L"String", L"String");
        }
        delete pExtensionKey;
JsonString* pHeightKey = new JsonString(L"height");
        IJsonValue* pHeightVal = null;
        pJsonObject->GetValue(pHeightKey, pHeightVal);
        if(pHeightVal != null) {
            
            pHeight = new Integer();
            jsonToValue(pHeight, pHeightVal, L"Integer", L"Integer");
        }
        delete pHeightKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pLengthKey = new JsonString(L"length");
        IJsonValue* pLengthVal = null;
        pJsonObject->GetValue(pLengthKey, pLengthVal);
        if(pLengthVal != null) {
            
            pLength = new Integer();
            jsonToValue(pLength, pLengthVal, L"Integer", L"Integer");
        }
        delete pLengthKey;
JsonString* pLocationKey = new JsonString(L"location");
        IJsonValue* pLocationVal = null;
        pJsonObject->GetValue(pLocationKey, pLocationVal);
        if(pLocationVal != null) {
            
            pLocation = new String();
            jsonToValue(pLocation, pLocationVal, L"String", L"String");
        }
        delete pLocationKey;
JsonString* pLong_descriptionKey = new JsonString(L"long_description");
        IJsonValue* pLong_descriptionVal = null;
        pJsonObject->GetValue(pLong_descriptionKey, pLong_descriptionVal);
        if(pLong_descriptionVal != null) {
            
            pLong_description = new String();
            jsonToValue(pLong_description, pLong_descriptionVal, L"String", L"String");
        }
        delete pLong_descriptionKey;
JsonString* pMime_typeKey = new JsonString(L"mime_type");
        IJsonValue* pMime_typeVal = null;
        pJsonObject->GetValue(pMime_typeKey, pMime_typeVal);
        if(pMime_typeVal != null) {
            
            pMime_type = new String();
            jsonToValue(pMime_type, pMime_typeVal, L"String", L"String");
        }
        delete pMime_typeKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPriorityKey = new JsonString(L"priority");
        IJsonValue* pPriorityVal = null;
        pJsonObject->GetValue(pPriorityKey, pPriorityVal);
        if(pPriorityVal != null) {
            
            pPriority = new Integer();
            jsonToValue(pPriority, pPriorityVal, L"Integer", L"Integer");
        }
        delete pPriorityKey;
JsonString* pPrivacyKey = new JsonString(L"privacy");
        IJsonValue* pPrivacyVal = null;
        pJsonObject->GetValue(pPrivacyKey, pPrivacyVal);
        if(pPrivacyVal != null) {
            
            pPrivacy = new String();
            jsonToValue(pPrivacy, pPrivacyVal, L"String", L"String");
        }
        delete pPrivacyKey;
JsonString* pPublishedKey = new JsonString(L"published");
        IJsonValue* pPublishedVal = null;
        pJsonObject->GetValue(pPublishedKey, pPublishedVal);
        if(pPublishedVal != null) {
            
            pPublished = new Boolean(false);
            jsonToValue(pPublished, pPublishedVal, L"Boolean", L"Boolean");
        }
        delete pPublishedKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
JsonString* pSizeKey = new JsonString(L"size");
        IJsonValue* pSizeVal = null;
        pJsonObject->GetValue(pSizeKey, pSizeVal);
        if(pSizeVal != null) {
            
            pSize = new Long();
            jsonToValue(pSize, pSizeVal, L"Long", L"Long");
        }
        delete pSizeKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"SamiVideoTag");
        }
        delete pTagsKey;
JsonString* pThumbnailKey = new JsonString(L"thumbnail");
        IJsonValue* pThumbnailVal = null;
        pJsonObject->GetValue(pThumbnailKey, pThumbnailVal);
        if(pThumbnailVal != null) {
            
            pThumbnail = new String();
            jsonToValue(pThumbnail, pThumbnailVal, L"String", L"String");
        }
        delete pThumbnailKey;
JsonString* pUpdatedKey = new JsonString(L"updated");
        IJsonValue* pUpdatedVal = null;
        pJsonObject->GetValue(pUpdatedKey, pUpdatedVal);
        if(pUpdatedVal != null) {
            
            pUpdated = new Long();
            jsonToValue(pUpdated, pUpdatedVal, L"Long", L"Long");
        }
        delete pUpdatedKey;
JsonString* pUploaderKey = new JsonString(L"uploader");
        IJsonValue* pUploaderVal = null;
        pJsonObject->GetValue(pUploaderKey, pUploaderVal);
        if(pUploaderVal != null) {
            
            pUploader = new SamiUser();
            jsonToValue(pUploader, pUploaderVal, L"SamiUser", L"SamiUser");
        }
        delete pUploaderKey;
JsonString* pViewsKey = new JsonString(L"views");
        IJsonValue* pViewsVal = null;
        pJsonObject->GetValue(pViewsKey, pViewsVal);
        if(pViewsVal != null) {
            
            pViews = new Long();
            jsonToValue(pViews, pViewsVal, L"Long", L"Long");
        }
        delete pViewsKey;
JsonString* pWhitelistKey = new JsonString(L"whitelist");
        IJsonValue* pWhitelistVal = null;
        pJsonObject->GetValue(pWhitelistKey, pWhitelistVal);
        if(pWhitelistVal != null) {
            pWhitelist = new ArrayList();
            
            jsonToValue(pWhitelist, pWhitelistVal, L"IList", L"SamiUser");
        }
        delete pWhitelistKey;
JsonString* pWidthKey = new JsonString(L"width");
        IJsonValue* pWidthVal = null;
        pJsonObject->GetValue(pWidthKey, pWidthVal);
        if(pWidthVal != null) {
            
            pWidth = new Integer();
            jsonToValue(pWidth, pWidthVal, L"Integer", L"Integer");
        }
        delete pWidthKey;
    }
}

SamiVideo::SamiVideo(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiVideo::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiVideo::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActiveKey = new JsonString(L"active");
    pJsonObject->Add(pActiveKey, toJson(getPActive(), "Boolean", ""));

    JsonString *pAuthorKey = new JsonString(L"author");
    pJsonObject->Add(pAuthorKey, toJson(getPAuthor(), "SamiArtist", ""));

    JsonString *pAuthoredKey = new JsonString(L"authored");
    pJsonObject->Add(pAuthoredKey, toJson(getPAuthored(), "Long", ""));

    JsonString *pBannedKey = new JsonString(L"banned");
    pJsonObject->Add(pBannedKey, toJson(getPBanned(), "Boolean", ""));

    JsonString *pCategory_idKey = new JsonString(L"category_id");
    pJsonObject->Add(pCategory_idKey, toJson(getPCategoryId(), "String", ""));

    JsonString *pCategory_nameKey = new JsonString(L"category_name");
    pJsonObject->Add(pCategory_nameKey, toJson(getPCategoryName(), "String", ""));

    JsonString *pContributorsKey = new JsonString(L"contributors");
    pJsonObject->Add(pContributorsKey, toJson(getPContributors(), "SamiCollection«VideoContribution»", ""));

    JsonString *pCreatedKey = new JsonString(L"created");
    pJsonObject->Add(pCreatedKey, toJson(getPCreated(), "Long", ""));

    JsonString *pEmbedKey = new JsonString(L"embed");
    pJsonObject->Add(pEmbedKey, toJson(getPEmbed(), "String", ""));

    JsonString *pExtensionKey = new JsonString(L"extension");
    pJsonObject->Add(pExtensionKey, toJson(getPExtension(), "String", ""));

    JsonString *pHeightKey = new JsonString(L"height");
    pJsonObject->Add(pHeightKey, toJson(getPHeight(), "Integer", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pLengthKey = new JsonString(L"length");
    pJsonObject->Add(pLengthKey, toJson(getPLength(), "Integer", ""));

    JsonString *pLocationKey = new JsonString(L"location");
    pJsonObject->Add(pLocationKey, toJson(getPLocation(), "String", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pMime_typeKey = new JsonString(L"mime_type");
    pJsonObject->Add(pMime_typeKey, toJson(getPMimeType(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPriorityKey = new JsonString(L"priority");
    pJsonObject->Add(pPriorityKey, toJson(getPPriority(), "Integer", ""));

    JsonString *pPrivacyKey = new JsonString(L"privacy");
    pJsonObject->Add(pPrivacyKey, toJson(getPPrivacy(), "String", ""));

    JsonString *pPublishedKey = new JsonString(L"published");
    pJsonObject->Add(pPublishedKey, toJson(getPPublished(), "Boolean", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pSizeKey = new JsonString(L"size");
    pJsonObject->Add(pSizeKey, toJson(getPSize(), "Long", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "SamiVideoTag", "array"));

    JsonString *pThumbnailKey = new JsonString(L"thumbnail");
    pJsonObject->Add(pThumbnailKey, toJson(getPThumbnail(), "String", ""));

    JsonString *pUpdatedKey = new JsonString(L"updated");
    pJsonObject->Add(pUpdatedKey, toJson(getPUpdated(), "Long", ""));

    JsonString *pUploaderKey = new JsonString(L"uploader");
    pJsonObject->Add(pUploaderKey, toJson(getPUploader(), "SamiUser", ""));

    JsonString *pViewsKey = new JsonString(L"views");
    pJsonObject->Add(pViewsKey, toJson(getPViews(), "Long", ""));

    JsonString *pWhitelistKey = new JsonString(L"whitelist");
    pJsonObject->Add(pWhitelistKey, toJson(getPWhitelist(), "SamiUser", "array"));

    JsonString *pWidthKey = new JsonString(L"width");
    pJsonObject->Add(pWidthKey, toJson(getPWidth(), "Integer", ""));

    return pJsonObject;
}

Boolean*
SamiVideo::getPActive() {
    return pActive;
}
void
SamiVideo::setPActive(Boolean* pActive) {
    this->pActive = pActive;
}

SamiArtist*
SamiVideo::getPAuthor() {
    return pAuthor;
}
void
SamiVideo::setPAuthor(SamiArtist* pAuthor) {
    this->pAuthor = pAuthor;
}

Long*
SamiVideo::getPAuthored() {
    return pAuthored;
}
void
SamiVideo::setPAuthored(Long* pAuthored) {
    this->pAuthored = pAuthored;
}

Boolean*
SamiVideo::getPBanned() {
    return pBanned;
}
void
SamiVideo::setPBanned(Boolean* pBanned) {
    this->pBanned = pBanned;
}

String*
SamiVideo::getPCategoryId() {
    return pCategory_id;
}
void
SamiVideo::setPCategoryId(String* pCategory_id) {
    this->pCategory_id = pCategory_id;
}

String*
SamiVideo::getPCategoryName() {
    return pCategory_name;
}
void
SamiVideo::setPCategoryName(String* pCategory_name) {
    this->pCategory_name = pCategory_name;
}

SamiCollection«VideoContribution»*
SamiVideo::getPContributors() {
    return pContributors;
}
void
SamiVideo::setPContributors(SamiCollection«VideoContribution»* pContributors) {
    this->pContributors = pContributors;
}

Long*
SamiVideo::getPCreated() {
    return pCreated;
}
void
SamiVideo::setPCreated(Long* pCreated) {
    this->pCreated = pCreated;
}

String*
SamiVideo::getPEmbed() {
    return pEmbed;
}
void
SamiVideo::setPEmbed(String* pEmbed) {
    this->pEmbed = pEmbed;
}

String*
SamiVideo::getPExtension() {
    return pExtension;
}
void
SamiVideo::setPExtension(String* pExtension) {
    this->pExtension = pExtension;
}

Integer*
SamiVideo::getPHeight() {
    return pHeight;
}
void
SamiVideo::setPHeight(Integer* pHeight) {
    this->pHeight = pHeight;
}

Long*
SamiVideo::getPId() {
    return pId;
}
void
SamiVideo::setPId(Long* pId) {
    this->pId = pId;
}

Integer*
SamiVideo::getPLength() {
    return pLength;
}
void
SamiVideo::setPLength(Integer* pLength) {
    this->pLength = pLength;
}

String*
SamiVideo::getPLocation() {
    return pLocation;
}
void
SamiVideo::setPLocation(String* pLocation) {
    this->pLocation = pLocation;
}

String*
SamiVideo::getPLongDescription() {
    return pLong_description;
}
void
SamiVideo::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiVideo::getPMimeType() {
    return pMime_type;
}
void
SamiVideo::setPMimeType(String* pMime_type) {
    this->pMime_type = pMime_type;
}

String*
SamiVideo::getPName() {
    return pName;
}
void
SamiVideo::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiVideo::getPPriority() {
    return pPriority;
}
void
SamiVideo::setPPriority(Integer* pPriority) {
    this->pPriority = pPriority;
}

String*
SamiVideo::getPPrivacy() {
    return pPrivacy;
}
void
SamiVideo::setPPrivacy(String* pPrivacy) {
    this->pPrivacy = pPrivacy;
}

Boolean*
SamiVideo::getPPublished() {
    return pPublished;
}
void
SamiVideo::setPPublished(Boolean* pPublished) {
    this->pPublished = pPublished;
}

String*
SamiVideo::getPShortDescription() {
    return pShort_description;
}
void
SamiVideo::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

Long*
SamiVideo::getPSize() {
    return pSize;
}
void
SamiVideo::setPSize(Long* pSize) {
    this->pSize = pSize;
}

IList*
SamiVideo::getPTags() {
    return pTags;
}
void
SamiVideo::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiVideo::getPThumbnail() {
    return pThumbnail;
}
void
SamiVideo::setPThumbnail(String* pThumbnail) {
    this->pThumbnail = pThumbnail;
}

Long*
SamiVideo::getPUpdated() {
    return pUpdated;
}
void
SamiVideo::setPUpdated(Long* pUpdated) {
    this->pUpdated = pUpdated;
}

SamiUser*
SamiVideo::getPUploader() {
    return pUploader;
}
void
SamiVideo::setPUploader(SamiUser* pUploader) {
    this->pUploader = pUploader;
}

Long*
SamiVideo::getPViews() {
    return pViews;
}
void
SamiVideo::setPViews(Long* pViews) {
    this->pViews = pViews;
}

IList*
SamiVideo::getPWhitelist() {
    return pWhitelist;
}
void
SamiVideo::setPWhitelist(IList* pWhitelist) {
    this->pWhitelist = pWhitelist;
}

Integer*
SamiVideo::getPWidth() {
    return pWidth;
}
void
SamiVideo::setPWidth(Integer* pWidth) {
    this->pWidth = pWidth;
}



} /* namespace Swagger */

