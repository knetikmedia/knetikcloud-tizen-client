/*
 * SamiStoreItemTemplateResource.h
 * 
 * 
 */

#ifndef SamiStoreItemTemplateResource_H_
#define SamiStoreItemTemplateResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiItemBehaviorDefinitionResource.h"
#include "SamiPropertyDefinitionResource.h"
#include "SamiTemplateResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiStoreItemTemplateResource: public SamiObject {
public:
    SamiStoreItemTemplateResource();
    SamiStoreItemTemplateResource(String* json);
    virtual ~SamiStoreItemTemplateResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStoreItemTemplateResource* fromJson(String* obj);

    IList* getPBehaviors();
    void setPBehaviors(IList* pBehaviors);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);
    IList* getPProperties();
    void setPProperties(IList* pProperties);
    SamiTemplateResource* getPSkuTemplate();
    void setPSkuTemplate(SamiTemplateResource* pSku_template);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    IList* pBehaviors;
Long* pCreated_date;
String* pId;
String* pName;
IList* pProperties;
SamiTemplateResource* pSku_template;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiStoreItemTemplateResource_H_ */
