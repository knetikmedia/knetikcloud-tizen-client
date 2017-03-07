/*
 * SamiFulfillmentType.h
 * 
 * 
 */

#ifndef SamiFulfillmentType_H_
#define SamiFulfillmentType_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiFulfillmentType: public SamiObject {
public:
    SamiFulfillmentType();
    SamiFulfillmentType(String* json);
    virtual ~SamiFulfillmentType();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFulfillmentType* fromJson(String* obj);

    Boolean* getPCore();
    void setPCore(Boolean* pCore);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPName();
    void setPName(String* pName);

private:
    Boolean* pCore;
String* pDescription;
Integer* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiFulfillmentType_H_ */
