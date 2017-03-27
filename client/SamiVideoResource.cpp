
#include "SamiVideoResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVideoResource::SamiVideoResource() {
    init();
}

SamiVideoResource::~SamiVideoResource() {
    this->cleanup();
}

void
SamiVideoResource::init() {
    pActive = null;
pAuthor = null;
pAuthored = null;
pBanned = null;
pCategory = null;
pComments = null;
pContributors = null;
pCreated_date = null;
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
pUpdated_date = null;
pUploader = null;
pViews = null;
pWidth = null;
}

void
SamiVideoResource::cleanup() {
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
if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pComments != null) {
        pComments->RemoveAll(true);
        delete pComments;
        pComments = null;
    }
if(pContributors != null) {
        pContributors->RemoveAll(true);
        delete pContributors;
        pContributors = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
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
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUploader != null) {
        
        delete pUploader;
        pUploader = null;
    }
if(pViews != null) {
        
        delete pViews;
        pViews = null;
    }
if(pWidth != null) {
        
        delete pWidth;
        pWidth = null;
    }
}


SamiVideoResource*
SamiVideoResource::fromJson(String* json) {
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
SamiVideoResource::fromJsonObject(IJsonValue* pJson) {
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
            
            pAuthor = new SamiSimpleReferenceResource«long»();
            jsonToValue(pAuthor, pAuthorVal, L"SamiSimpleReferenceResource«long»", L"SamiSimpleReferenceResource«long»");
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
JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new SamiSimpleReferenceResource«string»();
            jsonToValue(pCategory, pCategoryVal, L"SamiSimpleReferenceResource«string»", L"SamiSimpleReferenceResource«string»");
        }
        delete pCategoryKey;
JsonString* pCommentsKey = new JsonString(L"comments");
        IJsonValue* pCommentsVal = null;
        pJsonObject->GetValue(pCommentsKey, pCommentsVal);
        if(pCommentsVal != null) {
            pComments = new ArrayList();
            
            jsonToValue(pComments, pCommentsVal, L"IList", L"SamiCommentResource");
        }
        delete pCommentsKey;
JsonString* pContributorsKey = new JsonString(L"contributors");
        IJsonValue* pContributorsVal = null;
        pJsonObject->GetValue(pContributorsKey, pContributorsVal);
        if(pContributorsVal != null) {
            pContributors = new ArrayList();
            
            jsonToValue(pContributors, pContributorsVal, L"IList", L"SamiContributionResource");
        }
        delete pContributorsKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
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
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
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
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
JsonString* pUploaderKey = new JsonString(L"uploader");
        IJsonValue* pUploaderVal = null;
        pJsonObject->GetValue(pUploaderKey, pUploaderVal);
        if(pUploaderVal != null) {
            
            pUploader = new SamiSimpleUserResource();
            jsonToValue(pUploader, pUploaderVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
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

SamiVideoResource::SamiVideoResource(String* json) {
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
SamiVideoResource::asJson ()
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
SamiVideoResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActiveKey = new JsonString(L"active");
    pJsonObject->Add(pActiveKey, toJson(getPActive(), "Boolean", ""));

    JsonString *pAuthorKey = new JsonString(L"author");
    pJsonObject->Add(pAuthorKey, toJson(getPAuthor(), "SamiSimpleReferenceResource«long»", ""));

    JsonString *pAuthoredKey = new JsonString(L"authored");
    pJsonObject->Add(pAuthoredKey, toJson(getPAuthored(), "Long", ""));

    JsonString *pBannedKey = new JsonString(L"banned");
    pJsonObject->Add(pBannedKey, toJson(getPBanned(), "Boolean", ""));

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "SamiSimpleReferenceResource«string»", ""));

    JsonString *pCommentsKey = new JsonString(L"comments");
    pJsonObject->Add(pCommentsKey, toJson(getPComments(), "SamiCommentResource", "array"));

    JsonString *pContributorsKey = new JsonString(L"contributors");
    pJsonObject->Add(pContributorsKey, toJson(getPContributors(), "SamiContributionResource", "array"));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

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
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pThumbnailKey = new JsonString(L"thumbnail");
    pJsonObject->Add(pThumbnailKey, toJson(getPThumbnail(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUploaderKey = new JsonString(L"uploader");
    pJsonObject->Add(pUploaderKey, toJson(getPUploader(), "SamiSimpleUserResource", ""));

    JsonString *pViewsKey = new JsonString(L"views");
    pJsonObject->Add(pViewsKey, toJson(getPViews(), "Long", ""));

    JsonString *pWidthKey = new JsonString(L"width");
    pJsonObject->Add(pWidthKey, toJson(getPWidth(), "Integer", ""));

    return pJsonObject;
}

Boolean*
SamiVideoResource::getPActive() {
    return pActive;
}
void
SamiVideoResource::setPActive(Boolean* pActive) {
    this->pActive = pActive;
}

SamiSimpleReferenceResource«long»*
SamiVideoResource::getPAuthor() {
    return pAuthor;
}
void
SamiVideoResource::setPAuthor(SamiSimpleReferenceResource«long»* pAuthor) {
    this->pAuthor = pAuthor;
}

Long*
SamiVideoResource::getPAuthored() {
    return pAuthored;
}
void
SamiVideoResource::setPAuthored(Long* pAuthored) {
    this->pAuthored = pAuthored;
}

Boolean*
SamiVideoResource::getPBanned() {
    return pBanned;
}
void
SamiVideoResource::setPBanned(Boolean* pBanned) {
    this->pBanned = pBanned;
}

SamiSimpleReferenceResource«string»*
SamiVideoResource::getPCategory() {
    return pCategory;
}
void
SamiVideoResource::setPCategory(SamiSimpleReferenceResource«string»* pCategory) {
    this->pCategory = pCategory;
}

IList*
SamiVideoResource::getPComments() {
    return pComments;
}
void
SamiVideoResource::setPComments(IList* pComments) {
    this->pComments = pComments;
}

IList*
SamiVideoResource::getPContributors() {
    return pContributors;
}
void
SamiVideoResource::setPContributors(IList* pContributors) {
    this->pContributors = pContributors;
}

Long*
SamiVideoResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiVideoResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiVideoResource::getPEmbed() {
    return pEmbed;
}
void
SamiVideoResource::setPEmbed(String* pEmbed) {
    this->pEmbed = pEmbed;
}

String*
SamiVideoResource::getPExtension() {
    return pExtension;
}
void
SamiVideoResource::setPExtension(String* pExtension) {
    this->pExtension = pExtension;
}

Integer*
SamiVideoResource::getPHeight() {
    return pHeight;
}
void
SamiVideoResource::setPHeight(Integer* pHeight) {
    this->pHeight = pHeight;
}

Long*
SamiVideoResource::getPId() {
    return pId;
}
void
SamiVideoResource::setPId(Long* pId) {
    this->pId = pId;
}

Integer*
SamiVideoResource::getPLength() {
    return pLength;
}
void
SamiVideoResource::setPLength(Integer* pLength) {
    this->pLength = pLength;
}

String*
SamiVideoResource::getPLocation() {
    return pLocation;
}
void
SamiVideoResource::setPLocation(String* pLocation) {
    this->pLocation = pLocation;
}

String*
SamiVideoResource::getPLongDescription() {
    return pLong_description;
}
void
SamiVideoResource::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiVideoResource::getPMimeType() {
    return pMime_type;
}
void
SamiVideoResource::setPMimeType(String* pMime_type) {
    this->pMime_type = pMime_type;
}

String*
SamiVideoResource::getPName() {
    return pName;
}
void
SamiVideoResource::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiVideoResource::getPPriority() {
    return pPriority;
}
void
SamiVideoResource::setPPriority(Integer* pPriority) {
    this->pPriority = pPriority;
}

String*
SamiVideoResource::getPPrivacy() {
    return pPrivacy;
}
void
SamiVideoResource::setPPrivacy(String* pPrivacy) {
    this->pPrivacy = pPrivacy;
}

Boolean*
SamiVideoResource::getPPublished() {
    return pPublished;
}
void
SamiVideoResource::setPPublished(Boolean* pPublished) {
    this->pPublished = pPublished;
}

String*
SamiVideoResource::getPShortDescription() {
    return pShort_description;
}
void
SamiVideoResource::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

Long*
SamiVideoResource::getPSize() {
    return pSize;
}
void
SamiVideoResource::setPSize(Long* pSize) {
    this->pSize = pSize;
}

IList*
SamiVideoResource::getPTags() {
    return pTags;
}
void
SamiVideoResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiVideoResource::getPThumbnail() {
    return pThumbnail;
}
void
SamiVideoResource::setPThumbnail(String* pThumbnail) {
    this->pThumbnail = pThumbnail;
}

Long*
SamiVideoResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiVideoResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

SamiSimpleUserResource*
SamiVideoResource::getPUploader() {
    return pUploader;
}
void
SamiVideoResource::setPUploader(SamiSimpleUserResource* pUploader) {
    this->pUploader = pUploader;
}

Long*
SamiVideoResource::getPViews() {
    return pViews;
}
void
SamiVideoResource::setPViews(Long* pViews) {
    this->pViews = pViews;
}

Integer*
SamiVideoResource::getPWidth() {
    return pWidth;
}
void
SamiVideoResource::setPWidth(Integer* pWidth) {
    this->pWidth = pWidth;
}



} /* namespace Swagger */

