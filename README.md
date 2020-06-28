# Garry's Mod Node graph module
This module used for SB Advanced Nextbots in Garry's Mod, it will work only for SB Advanced Nextbots. It allows bots to move using nodegraph system. It reads map's .ain file, without that file bots will not be able to move using nodegraph.

# Module documentation

#Enums

	SBAdvancedNextbotNodeGraph.NODE_ANY
	SBAdvancedNextbotNodeGraph.NODE_DELETED
	SBAdvancedNextbotNodeGraph.NODE_GROUND
	SBAdvancedNextbotNodeGraph.NODE_AIR
	SBAdvancedNextbotNodeGraph.NODE_CLIMB
	SBAdvancedNextbotNodeGraph.NODE_WATER

	SBAdvancedNextbotNodeGraph.AI_NODE_ZONE_UNKNOWN
	SBAdvancedNextbotNodeGraph.AI_NODE_ZONE_SOLO
	SBAdvancedNextbotNodeGraph.AI_NODE_ZONE_UNIVERSAL
	SBAdvancedNextbotNodeGraph.AI_NODE_FIRST_ZONE

#Functions

----------------------------------------
	Name: SBAdvancedNextbotNodeGraph.Load
	Desc: Loads nodes from maps/graphs/.ain, deletes previous nodes.
	Arg1: 
	Ret1: 
----------------------------------------

----------------------------------------
	Name: SBAdvancedNextbotNodeGraph.GetAllNodes
	Desc: Returns all Nodes on map.
	Arg1: 
	Ret1: table | Table of nodes.
----------------------------------------

----------------------------------------
	Name: SBAdvancedNextbotNodeGraph.GetNodesCount
	Desc: Returns count of loaded nodes. Better performance than #SBAdvancedNextbotNodeGraph.GetAllNodes()
	Arg1: 
	Ret1: number | Count of nodes.
----------------------------------------

----------------------------------------
	Name: SBAdvancedNextbotNodeGraph.Path
	Desc: Returns new SBNodeGraphPathFollower object for path creation using nodegraph.
	Arg1: 
	Ret1: SBNodeGraphPathFollower | Path object.
----------------------------------------

----------------------------------------
	Name: SBAdvancedNextbotNodeGraph.GetNearestNode
	Desc: Returns nearest node to given position.
	Arg1: Vector | Position.
	Ret1: SBNodeGraphNode | Nearest node.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphNode:GetOrigin
	Desc: Returns origin of node.
	Arg1: 
	Ret1: Vector | Origin.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphNode:GetYaw
	Desc: Returns yaw of node. Not used.
	Arg1: 
	Ret1: number | yaw.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphNode:GetType
	Desc: Returns type of node. See NODE_* Enums
	Arg1: 
	Ret1: number | type.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphNode:GetZone
	Desc: Returns zone of node. Not used. See AI_NODE_ZONE_* Enums
	Arg1: 
	Ret1: number | zone.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphNode:GetID
	Desc: Returns id of node.
	Arg1: 
	Ret1: number | id.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphNode:GetAdjacentNodes
	Desc: Returns all adjacent nodes of this node.
	Arg1: 
	Ret1: table | Table of adjacent nodes.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphNode:GetAcceptedMoveTypes
	Desc: Returns all accepted move types between given node and this node. See CAP_* Enums
	Arg1: SBNodeGraphNode | Other node.
	Ret1: table | Table move types if other node is neighbor, nil otherwise.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:Compute
	Desc: Computes path using nodegraph.
	Arg1: Entity | Bot for computing path.
	Arg2: Vector | Goal position.
	Arg3: (optional) function | Custom cost generator. Arguments: SBNodeGraphNode node, SBNodeGraphNode from. Returns: number cost.
	Ret1: bool | true if path generated successfully, false otherwise.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:FirstSegment
	Desc: See PathFollower:FirstSegment
	Arg1: 
	Ret1: table | Segment data.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetAge
	Desc: See PathFollower:GetAge
	Arg1: 
	Ret1: number | age.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetAllSegments
	Desc: See PathFollower:GetAllSegments
	Arg1: 
	Ret1: table | table of segments data.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetCurrentGoal
	Desc: See PathFollower:GetCurrentGoal
	Arg1: 
	Ret1: table | Segment data.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetEnd
	Desc: See PathFollower:GetEnd
	Arg1: 
	Ret1: Vector | Goal position.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetGoalTolerance
	Desc: See PathFollower:GetGoalTolerance
	Arg1: 
	Ret1: number | distance.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetLength
	Desc: See PathFollower:GetLength
	Arg1: 
	Ret1: number | length.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetMinLookAheadDistance
	Desc: See PathFollower:GetMinLookAheadDistance
	Arg1: 
	Ret1: number | distance.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:GetStart
	Desc: See PathFollower:GetStart
	Arg1: 
	Ret1: Vector | Start position.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:Invalidate
	Desc: Invalidates path.
	Arg1: 
	Ret1: 
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:IsValid
	Desc: Returns valid path or not.
	Arg1: 
	Ret1: bool | path valid or not.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:LastSegment
	Desc: See PathFollower:LastSegment
	Arg1: 
	Ret1: table | Segment data.
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:ResetAge
	Desc: See PathFollower:ResetAge
	Arg1: 
	Ret1: 
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:SetGoalTolerance
	Desc: See PathFollower:SetGoalTolerance
	Arg1: number | distance
	Ret1: 
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:SetMinLookAheadDistance
	Desc: See PathFollower:SetMinLookAheadDistance
	Arg1: number | distance
	Ret1: 
----------------------------------------

----------------------------------------
	Name: SBNodeGraphPathFollower:Update
	Desc: See PathFollower:Update
	Arg1: Entity | Bot for updating
	Ret1: 
----------------------------------------
