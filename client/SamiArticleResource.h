/*
 * SamiArticleResource.h
 * 
 * 
 */

#ifndef SamiArticleResource_H_
#define SamiArticleResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNestedCategory.h"
#include "SamiProperty.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiArticleResource: public SamiObject {
public:
    SamiArticleResource();
    SamiArticleResource(String* json);
    virtual ~SamiArticleResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiArticleResource* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPBody();
    void setPBody(String* pBody);
    SamiNestedCategory* getPCategory();
    void setPCategory(SamiNestedCategory* pCategory);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    String* getPTitle();
    void setPTitle(String* pTitle);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Boolean* pActive;
HashMap* pAdditional_properties;
String* pBody;
SamiNestedCategory* pCategory;
Long* pCreated_date;
String* pId;
IList* pTags;
String* pTemplate;
String* pTitle;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiArticleResource_H_ */
