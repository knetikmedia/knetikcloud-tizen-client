/*
 * SamiSearchReferenceMapping.h
 * 
 * 
 */

#ifndef SamiSearchReferenceMapping_H_
#define SamiSearchReferenceMapping_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiSearchReferenceMapping: public SamiObject {
public:
    SamiSearchReferenceMapping();
    SamiSearchReferenceMapping(String* json);
    virtual ~SamiSearchReferenceMapping();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSearchReferenceMapping* fromJson(String* obj);

    String* getPId();
    void setPId(String* pId);
    String* getPRefIdField();
    void setPRefIdField(String* pRef_id_field);
    String* getPRefType();
    void setPRefType(String* pRef_type);
    HashMap* getPSourceFieldToDestinationField();
    void setPSourceFieldToDestinationField(HashMap* pSource_field_to_destination_field);
    String* getPType();
    void setPType(String* pType);

private:
    String* pId;
String* pRef_id_field;
String* pRef_type;
HashMap* pSource_field_to_destination_field;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiSearchReferenceMapping_H_ */
