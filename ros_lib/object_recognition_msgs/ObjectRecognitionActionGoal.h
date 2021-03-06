#ifndef _ROS_object_recognition_msgs_ObjectRecognitionActionGoal_h
#define _ROS_object_recognition_msgs_ObjectRecognitionActionGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "object_recognition_msgs/ObjectRecognitionGoal.h"

namespace object_recognition_msgs
{

  class ObjectRecognitionActionGoal : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalID goal_id;
      object_recognition_msgs::ObjectRecognitionGoal goal;

    ObjectRecognitionActionGoal():
      header(),
      goal_id(),
      goal()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->goal_id.serialize(outbuffer + offset);
      offset += this->goal.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->goal_id.deserialize(inbuffer + offset);
      offset += this->goal.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "object_recognition_msgs/ObjectRecognitionActionGoal"; };
    const char * getMD5(){ return "195eff91387a5f42dbd13be53431366b"; };

  };

}
#endif