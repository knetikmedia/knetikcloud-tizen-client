/*
 * SamiDatePropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiDatePropertyDefinitionResource_H_
#define SamiDatePropertyDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyDefinitionResource.h"
#include "SamiPropertyFieldListResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiDatePropertyDefinitionResource: public SamiObject {
public:
    SamiDatePropertyDefinitionResource();
    SamiDatePropertyDefinitionResource(String* json);
    virtual ~SamiDatePropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDatePropertyDefinitionResource* fromJson(String* obj);

    SamiPropertyFieldListResource* getPFieldList();
    void setPFieldList(SamiPropertyFieldListResource* pField_list);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);
    Long* getPMax();
    void setPMax(Long* pMax);
    Long* getPMin();
    void setPMin(Long* pMin);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
Long* pMax;
Long* pMin;
};

} /* namespace Swagger */

#endif /* SamiDatePropertyDefinitionResource_H_ */
